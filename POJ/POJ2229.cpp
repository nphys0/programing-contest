#include <iostream>
#include <string>
#include <vector>
#include <cmath>

/*
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iomanip>
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

const ll MAX_N=1000000+10;

ll N,dp[MAX_N];

int main(){
  cin>>N;
  dp[0]=1;
  for(ll i=1;i<=N;i++){
    if(i%2==1)dp[i]=(dp[i-1]%1000000000);
    else dp[i]=(dp[i-1]+dp[i/2])%1000000000;
  }
  cout<<dp[N]%1000000000<<endl;
  return 0;
}
