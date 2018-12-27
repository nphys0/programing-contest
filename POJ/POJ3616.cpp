#include <iostream>
#include <vector>


#include <string>
#include <algorithm>
/*
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

const ll MAX_M=1010;

ll N,M,R,dp[MAX_M];

struct interval{
  ll start;
  ll end;
  ll efficiency;

  bool operator<(const interval &another) const
    {
        return start < another.start;
    };

};


int main(){
  cin>>N>>M>>R;
  vector<interval> milk(M);
  for(ll i=0;i<M;i++){
    cin>>milk[i].start>>milk[i].end>>milk[i].efficiency;
  }

  sort(milk.begin(),milk.end());

  for(ll i=M-1;i>=0;i--){
    if(i!=M-1)dp[i]=dp[i+1];
    ll t_end=milk[i].end+R;
    ll j=i;
    while(milk[j].start<t_end&&j<M)j++;
    // j<M の条件で抜けた場合j=Mとなるからdp[j]=0となるので
    // dp[i]=max(dp[i],dp[j]+milk[i].efficiency);
    // はdp[i]とmilk[i].efficiencyの比較になる
    dp[i]=max(dp[i],dp[j]+milk[i].efficiency);
  }
  cout<<dp[0]<<endl;

 return 0;
}
