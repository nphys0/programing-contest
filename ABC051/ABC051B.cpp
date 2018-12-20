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
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>
#include <cstdlib>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;


int main(){
    ll k,s,ans;
    cin>>k>>s;
    ans=0;
    for(ll i=0;i<=k;i++){
        for(ll j=0;j<=k;j++){
                if(s-(i+j)<=k&&0<=s-(i+j))ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
