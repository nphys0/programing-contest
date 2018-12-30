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

const ll mod=1000000007ll;

unordered_map<ll,ll> factorization(ll n){
    unordered_map<ll,ll> mp;
    ll t=n;
    for(ll i=2;i<=t;i++){
        while(n%i==0){
            mp[i]++;
            n/=i;
        }
        if(n==1) break;
    }
    if(n!=1) mp[n]++;
    return mp;
}

// x^n (mod を法として)
ll mod_pow(ll x,ll n,ll mod){
    ll r=1;
    while(n>0){
        if(n&1){
            r=r*x%mod;
        }
        x=x*x%mod;
        n>>=1;
    }
    return r;
}

ll mod_inv_prime(ll n,ll mod){
    return mod_pow(n,mod-2,mod)%mod;
}


ll mod_comb(ll n,ll k,ll mod){
    ll r=1;
    for(ll i=1;i<=k;i++){
        r=r*(n-k+i)%mod;
        r=r*mod_inv_prime(i,mod)%mod;
    }
    return r;
}



int main(){
    ll N,M;
    cin>>N>>M;
    unordered_map<ll,ll> mp;
    mp=factorization(M);

    ll ans=1ll;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        //cout<<itr->first<<","<<itr->second<<endl;
        ans*=mod_comb((itr->second)+N-1,(itr->second),mod);
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}
