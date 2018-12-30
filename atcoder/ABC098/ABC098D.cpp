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

ll dp[MAX_N];

ll N;
vector<ll> knum(21),a(MAX_N);

bool x(){
  for(ll i=0;i<21;i++){
    if(knum[i]>=2)return false;
  }
  return true;
}

void kplus(ll r){
  for(ll i=0;i<21;i++){
    if((1<<i)&a[r]){
      knum[i]++;
    }
  }
}

void kminus(ll l){
  for(ll i=0;i<21;i++){
    if((1<<i)&a[l]){
      knum[i]--;
    }
  }
}

int main(){
  cin>>N;
  for(ll i=0;i<N;i++){
    cin>>a[i];
  }
  ll l=0,r=0;
  ll ans=0;

  while(true){
    while(r<=N && x()){
      kplus(r);
      r++;
    }
    ans+=r-l-1;
    kminus(l);

    l++;
    if(l==N)break;
  }

  cout<<ans<<endl;
  return 0;
}
