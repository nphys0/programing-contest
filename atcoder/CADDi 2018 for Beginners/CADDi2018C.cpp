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

const ll MAX_N=1000;

ll N,pn;

map<ll,ll> mp;

void solve_mp(ll pn){
  for(ll i=2;i<=ceil(sqrt(pn));i++){
    while(pn%i==0){
      mp[i]++;
      pn/=i;
    }
  }
  if(pn!=1)mp[pn]++;
}

int main(){
  cin>>N>>pn;
  solve_mp(pn);
  ll ans=1;
  for(auto itr=mp.begin();itr != mp.end(); ++itr){
//    cout<<itr->first<<", "<<itr->second<<", "<<(ll)(itr->second/N)<<endl;
    if(floor(itr->second/N)>=1) ans*=pow(itr->first , floor(itr->second/N));
  }
  cout<<ans<<endl;
  return 0;
}
