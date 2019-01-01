#include <iostream>
#include <vector>
#include <string>
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
//typedef vector<ll> vec;
//typedef vector<vec> mat;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

ll a,b,c;

int main(){
  cin>>a>>b>>c;
  ll ans=inf;
  ans=min(ans,abs(a-b)+abs(b-c));
  ans=min(ans,abs(b-a)+abs(a-c));
  ans=min(ans,abs(a-c)+abs(c-b));
  ans=min(ans,abs(b-c)+abs(c-a));
  ans=min(ans,abs(c-a)+abs(a-b));
  ans=min(ans,abs(c-b)+abs(b-a));
  cout<<ans<<endl;
  return 0;
}
