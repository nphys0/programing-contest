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
const ll nmax=500;
const ll mmax=200000;
const ll qmax=100000;
ll x[nmax+1][nmax+1],c[nmax+1][nmax+1];


int main(){

    ll N,M,Q;
    ll l,r;

    cin>>N>>M>>Q;

    for(ll i=0;i<M;i++){
        cin>>l>>r;
        x[l][r]++;
    }
    ll t=0;
    for(ll i=1;i<=N;i++){
        for(ll j=1;j<=N;j++){
            t=0;
            for(ll k=1;k<=j;k++){
                t+=x[i][k];
            //c[i][j]+=x[i][k];
            }
            c[i][j]=t;
        }
    }

    ll p,q;
    ll ans=0;
    for(ll i=0;i<Q;i++){
        cin>>p>>q;
        ans=0;
        for(ll j=p;j<=q;j++){
            ans+=(c[j][q]-c[j][j-1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
