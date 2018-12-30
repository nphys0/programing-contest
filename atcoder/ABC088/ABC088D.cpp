#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <queue>
#include <string>
using namespace std;
using ll=long long;

typedef pair<int, int> P;

const int MAX_H=50;
const int MAX_W=50;
const int inf=100000000;
char maze[MAX_H+1][MAX_W+1];
int H,W;
int sx,sy;
int gx,gy;
int d[MAX_H][MAX_W];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int bfs(){
    cin>>H>>W;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            d[i][j]=inf;
        }
    }
    int white=0;
    for(int i=0;i<H;i++){
        string s;
        cin>>s;
        for(int j=0;j<W;j++){
            maze[i][j]=s[j];
            if(s[j]=='.'){
                white++;
            }
        }
    }
    sx=sy=0;
    gx=H-1;
    gy=W-1;

    queue<P> q;
    q.push(P(sx,sy));
    d[sx][sy]=0;
    while(q.size()){
        P p=q.front();q.pop();
        if (p.first==gx&&p.second==gy){
            break;
        }
        for(int i=0;i<4;i++){
            int nx=p.first+dx[i];
            int ny=p.second+dy[i];
            if (0<=nx&&nx<H&&0<=ny&&ny<W&&maze[nx][ny]!='#'&&d[nx][ny]==inf){
                q.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
    if(d[gx][gy]!=inf){
        return white-(d[gx][gy]+1);
    }
    else{
        return -1;
    }
}


const int N_MAX=(100001);


int main(){
    int ans=bfs();
    //    cout<<white-(ans+1)<<endl;
    cout<<ans<<endl;

    return 0;
}
