#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>
#include <map>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

ll factor(ll n){
    ll ct=0;
    for(ll i=1;i<=n;i++){
        if(n%i==0)ct++;
    }
    return ct;
}

int main(){
    ll n,ans;
    cin>>n;
    ans=0;
    for(ll i=1;i<=n;i+=2){
        if(factor(i)==8)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
