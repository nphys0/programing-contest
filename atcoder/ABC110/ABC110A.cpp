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
    ll a,b,c,ans;
    ans=0;
    cin>>a>>b>>c;
    ans=max(ans,a*10+b+c);
    ans=max(ans,b*10+a+c);
    ans=max(ans,c*10+b+a);
    cout<<ans<<endl;
    return 0;
}
