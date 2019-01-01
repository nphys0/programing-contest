#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

//const ll nmax=100001;
//const ll inf=1000000000+7;
const ll nmax=100000;
ll d[nmax+1];
unordered_map<ll,ll> mp;

ll fact(ll n){
    if(n==0) return 1;
    return n*fact(n-1);
}

ll comb(ll n,ll k){
    return fact(n)/(fact(k)*fact(n-k));
}

int main(){
    ll N,M,a,ct,sum;
    cin>>N>>M;
    sum=0;
    mp[0]++;
    for(ll i=1;i<=N;i++){
        cin>>a;
        sum+=a;
//        cout<<"sum:"<<sum<<endl;
        mp[sum%M]++;
    }
    ll ans=0;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        ll a=itr->first;
        ll b=itr->second;
//        cout<<"a:"<<a<<", b:"<<b<<endl;
        ans+=b*(b-1)/2;
    }

    cout<<ans<<endl;
    return 0;
}
