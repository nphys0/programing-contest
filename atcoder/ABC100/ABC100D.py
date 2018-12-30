#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
using namespace std;
using ll=long long;

const ll nmax=1000;
ll x[nmax+1],y[nmax+1],z[nmax+1];


int main(){
    ll N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)cin>>x[i]>>y[i]>>z[i];
    ll sl[N];
    ll ans=0;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            for(int k=0;k<=1;k++){
                for(int l=0;l<N;l++)sl[l]=pow(-1,i)*x[l]+pow(-1,j)*y[l]+pow(-1,k)*z[l];
                sort(sl,sl+N,greater<ll>());
                ll ct=0;
                for(int i=0;i<M;i++)ct+=sl[i];
                ans=max(ans,ct);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
