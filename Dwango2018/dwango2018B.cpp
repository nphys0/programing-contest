#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>
#include <bitset>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

//const ll nmax=100001;
const ll inf=1000000000+7;
const ll nmax=1000;
ll a[nmax+1],slis[nmax+1],tlis[(nmax+1)*(nmax+2)/2];

ll N,K;
ll ans;
int main(){
    cin>>N>>K;
    for(ll i=0;i<N;i++){
        cin>>a[i];
        slis[i+1]=slis[i]+a[i];
    }
    ll tm=0;
    ll tlis[(N+1)*N/2];
    for(ll i=0;i<=N;i++){
        for(ll j=i+1;j<=N;j++){
            tlis[tm]=(slis[j]-slis[i]);
            tm++;
        }
    }

    ll x=0;
    ll xt=0;

    for(ll i=40;0<=i;i--){
        xt=x+pow(2,i);
        ll ct=0;
        for(ll j=0;j<=N*(N+1)/2;j++){
            if((tlis[j]&xt)==xt) ct++;
        }
        if(ct>=K) x=xt;
    }
    cout<<x<<endl;

    return 0;
}
