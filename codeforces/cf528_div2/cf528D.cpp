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

map<ll,ll> mp;

ll x,y,n;
double s;


int main(){
  cin>>n>>s;
  for(ll i=0;i<n-1;i++){
    cin>>x>>y;
    mp[x]++;
    mp[y]++;
  }
  ll l=0;
  for(auto itr=mp.begin();itr!=mp.end();itr++){
    if(itr->second==1)l++;
  }
  double ans=2*s/(double)(l);
  cout<<std::setprecision(10)<<ans<<endl;
  return 0;
}
