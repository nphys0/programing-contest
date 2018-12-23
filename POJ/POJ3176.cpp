#include <iostream>
/*
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
*/

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
//typedef vector<ll> vec;
//typedef vector<vec> mat;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll MAX_N=350+10;

const ll nmax=100010;

ll N,a[MAX_N][MAX_N],dp[MAX_N][MAX_N];

int main(){
  cin>>N;
  for(ll i=0;i<N;i++){
    for(ll j=1;j<=i+1;j++){
      cin>>a[i][j];
    }
  }

  dp[0][1]=a[0][1];
  for(ll i=0;i<N-1;i++){
    for(ll j=1;j<=i+2;j++){
      dp[i+1][j]=max(dp[i][j-1],dp[i][j])+a[i+1][j];
    }
  }
  ll ans=0;
  for(ll i=1;i<=N;i++){
    ans=max(ans,dp[N-1][i]);
  }

  cout<<ans<<endl;
  return 0;
}
