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

int main(){
  string s;
  cin>>s;
  ll ans=0;
  for(ll i=0;i<4;i++){
    if(s[i]=='+')ans++;
    else ans--;
  }
  cout<<ans<<endl;
  return 0;
}
