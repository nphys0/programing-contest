#include <iostream>
/*
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>
*/
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

//const ll nmax=100001;
//const ll inf=1000000000+7;
const ll hmax=500;
const ll wmax=500;
ll a[hmax+1][wmax+1],xy[hmax*wmax+1][4];


int main(){
    ll H,W;
    cin>>H>>W;
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin>>a[i][j];
        }
    }
    ll N=0;
    for(int i=1;i<=H;i++){
        if(i%2==1){
            for(int j=1;j<W;j++){
                if(a[i][j]%2==1){
                    xy[N][0]=i;xy[N][1]=j;xy[N][2]=i;xy[N][3]=j+1;
                    N++;
                    a[i][j]--;
                    a[i][j+1]++;
                }
            }
            if(a[i][W]%2==1&&i!=H){
                xy[N][0]=i;xy[N][1]=W;xy[N][2]=i+1;xy[N][3]=W;
                N++;
                a[i][W]--;
                a[i+1][W]++;
            }
        }
        else if(i%2==0){
            for(int j=W;1<j;j--){
                if(a[i][j]%2==1){
                    xy[N][0]=i;xy[N][1]=j;xy[N][2]=i;xy[N][3]=j-1;
                    N++;
                    a[i][j]--;
                    a[i][j-1]++;
                }
            }
            if(a[i][1]%2==1&&i!=H){
                xy[N][0]=i;xy[N][1]=1;xy[N][2]=i+1;xy[N][3]=1;
                N++;
                a[i][1]--;
                a[i+1][1]++;
            }
        }
    }
    cout<<N<<endl;
    for(int i=0;i<N;i++){
        cout<<xy[i][0]<<" "<<xy[i][1]<<" "<<xy[i][2]<<" "<<xy[i][3]<<endl;
    }


    return 0;
}
