#include <iostream>
#include <fstream>
#include <sstream>
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
#include <vector>
#include <set>
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=50;


int main(){
    ll n,m;
    cin>>n>>m;
    ll p[m],y[m];
    vector<ll> v[n];
    for(ll i=0;i<m;i++){
        cin>>p[i]>>y[i];
        p[i]--;
        v[p[i]].push_back(y[i]);
    }
    for(ll i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
    }
    for(ll i=0;i<m;i++){
//        cout<<p[i]<<" "<<y[i]<<endl;
        vector<ll>::iterator it = lower_bound(v[p[i]].begin(), v[p[i]].end(), y[i]);
        cout << setw(6) << setfill('0') << p[i]+1 << setw(6) << setfill('0') << (it - v[p[i]].begin())+1<<endl;
    }
    //for(ll i=0;i<2;i++)cout<<v[0][i]<<endl;

    return 0;
}
