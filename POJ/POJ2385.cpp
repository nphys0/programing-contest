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

const ll MAX_T=1010,MAX_W=40;

ll dp[MAX_T][MAX_W],T,W,a[MAX_T];
//dp[i][j]:=j回移動した時にi秒目にキャッチできる最大の個数

int main(){
  cin>>T>>W;
  for(ll i=0;i<T;i++){
    cin>>a[i];
    a[i]--;
  }

  ll v;
  for(ll i=0;i<T;i++){
    for(ll j=0;j<=W;j++){
      if(a[i]==j%2)v=1;
      else v=0;
      if(j>0){
        dp[i+1][j]=max(dp[i][j],dp[i][j-1])+v;
      }
      else{
        dp[i+1][j]=dp[i][j]+v;
      }
    }
  }
  cout<<dp[T][W]<<endl;
 return 0;
}
