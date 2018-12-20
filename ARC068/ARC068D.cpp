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

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=2*100000+1;

//ll par[nmax];
//ll rank[nmax];


int main()
{
    map<ll, ll> mp;
    ll n,a,k;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a;
        mp[a]=1;
    }
  	k=0;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr)k++;
    if(k%2==1)cout<<k<<endl;
    else cout<<k-1<<endl;
    return 0;
}
