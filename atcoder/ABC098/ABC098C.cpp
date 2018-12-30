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

const ll MAX_N=100010;

ll dp[MAX_N];

ll r_east,l_west,N;

string s;


int main(){
  cin>>N>>s;
  l_west=0;
  for(ll i=1;i<N;i++){
    if(s[i]=='E')r_east++;
  }
  ll ans=l_west+r_east;
  for(ll i=1;i<N;i++){
    if(s[i]=='E'){
      r_east--;
    }
    if(s[i-1]=='W'){
      l_west++;
    }
    ans=min(ans,l_west+r_east);
  }
  cout<<ans<<endl;
  return 0;
}
