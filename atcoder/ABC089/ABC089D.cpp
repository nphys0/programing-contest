#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <queue>
#include <string>
using namespace std;
using ll=long long;

const int wmax=300;
const int hmax=300;
int x[wmax*hmax+1],y[wmax*hmax+1],d[wmax*hmax+1];
int a,H,W,D;

int main(){
    cin>>H>>W>>D;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>a;
            x[a]=i;
            y[a]=j;
        }
    }
    for(int i=D+1;i<=H*W;i++){
        d[i]=d[i-D]+abs(x[i]-x[i-D])+abs(y[i]-y[i-D]);
    }
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        int l,r;
        cin>>l>>r;
        cout<<d[r]-d[l]<<endl;
    }
    return 0;
}
