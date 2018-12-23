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

ll N,K;

ll d_sum(ll n){
  ll res=0;
  while(n>0){
    res+=n%10;
    n/=10;
  }
  return res;
}

double sn(ll n){
  return (double)(n)/d_sum(n);
}

int main(){
  cin>>K;
  ll b=1;
  vector<ll> candidate;
  for(ll i=0;i<15;i++){
    for(ll j=1;j<1001;j++){
      candidate.emplace_back(b*(j+1)-1);
    }
    b*=10;
  }
  sort(candidate.begin(), candidate.end());
  candidate.erase(unique(candidate.begin(), candidate.end()), candidate.end());
  for(ll i=0;i<candidate.size();i++){
    for(ll j=i+1;j<candidate.size();j++){
      if(sn(candidate[i])>sn(candidate[j])){
        candidate.erase(candidate.begin()+i);
        i--;
        break;
      }
    }
  }

  for(ll i=0;i<K;i++){
    cout<<candidate[i]<<endl;
  }
  return 0;
}
