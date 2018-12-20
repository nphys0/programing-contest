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


int main(){
    ll n,ans,a;
    cin>>n;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>a;
        mp[a]++;
    }
    ans=0;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if((itr->second)%2==1)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
