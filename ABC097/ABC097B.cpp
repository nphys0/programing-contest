#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <bitset>
#include <numeric>
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>
#include <cstdlib>
#include <random>
#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> vec;
typedef vector<vec> mat;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll MAX_N=2*100000+10;

ll X;

int main(){
  cin>>X;
  ll ans=1;
  for(ll i=2;i<=ceil(sqrt(X));i++){
    ll tmp=i;
    for(ll j=0;tmp<=X;j++){
      if(tmp<=X)ans=max(tmp,ans);
      tmp*=i;
    }
  }
  cout<<ans<<endl;
  return 0;
}
