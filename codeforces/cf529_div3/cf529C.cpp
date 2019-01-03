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

const ll MAX_N=100010;

ll n,k;

int main(){
  cin>>n>>k;
  stack<ll> stk;
  map<ll,ll> mp;
  for(ll i=0;i<31;i++){
    if(n&(1<<i)){
      stk.push(1<<i);
      mp[1<<i]++;
    }
  }
  if(mp.size()>k){
    cout<<"NO"<<endl;
    return 0;
  }
  ll ct=mp.size();
  while(ct<k && !(stk.empty())){
    ll t=stk.top();stk.pop();
    if(t>1){
      mp[t]--;
      mp[t/2]+=2;
      ct++;
      if(t/2 > 1){
        stk.push(t/2);
        stk.push(t/2);
      }
    }
  }

  if(ct<k){
    cout<<"NO"<<endl;
    return 0;
  }
  else{
    cout<<"YES"<<endl;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
      for(ll i=0;i<itr->second;i++){
        cout<< itr->first<<" ";
      }
    }
  }
  cout<<endl;

  return 0;
}
