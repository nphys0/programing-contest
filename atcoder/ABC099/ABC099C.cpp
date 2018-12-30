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

ll N;

int main(){
  cin>>N;
  dp[0]=0;
  for(ll i=1;i<=N;i++){
    dp[i]=dp[i-1]+1;
    ll tmp=6;
    for(;tmp<=MAX_N;){
      if(i-tmp>=0)dp[i]=min(dp[i],dp[i-tmp]+1);
      tmp*=6;
    }
    tmp=9;
    for(;tmp<=MAX_N;){
      if(i-tmp>=0)dp[i]=min(dp[i],dp[i-tmp]+1);
      tmp*=9;
    }
  }
  cout<<dp[N]<<endl;
  return 0;
}
