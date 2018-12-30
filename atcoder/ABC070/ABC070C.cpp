#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <unordered_map>
#include <bitset>
#include <numeric>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=2*100000+1;

ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
    ll n,ans,g,tmp1,tmp2;
    cin>>n;
    ll t[n];
    for(ll i=0;i<n;i++){
        cin>>t[i];
    }

    for(ll i=0;i<n-1;i++){
        g=gcd(t[i],t[i+1]);
        if(t[i]<=t[i+1]){
            tmp1=t[i];
            tmp2=t[i+1];
        }
        if(t[i]>t[i+1]){
            tmp2=t[i];
            tmp1=t[i+1];
        }
        t[i+1]=(tmp2/g)*tmp1;
    }
    cout<<t[n-1]<<endl;
    return 0;
}
