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

const ll MAX_N=60,MAX_A=60;

ll N,A,x[MAX_N],dp[MAX_N][MAX_N][MAX_A*MAX_N];

int main(){
  cin>>N>>A;
  for(ll i=1;i<=N;i++){
    cin>>x[i];
  }
  dp[0][0][0]=1;
  for(ll i=0;i<=N;i++){
    for(ll j=0;j<=N;j++){
      for(ll k=0;k<=MAX_A*MAX_N;k++){
        if(i-1>=0&&j-1>=0&&k-x[i]>=0){
          dp[i][j][k]=dp[i-1][j][k]+dp[i-1][j-1][k-x[i]];
        }
        else if(i-1>=0&&k-x[i]<0){
          dp[i][j][k]=dp[i-1][j][k];
        }
        else if(i==0&&j==0&&k==0){
          dp[i][j][k]=1;
        }
        else{
          dp[i][j][k]=0;
        }
      }
    }
  }
  ll ans=0;
  for(ll i=1;i<=N;i++){
      ans+=dp[N][i][i*A];
  }
  cout<<ans<<endl;
  return 0;
}
