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

ll l_last,N;

string s;

string alp="abcdefghijklmnopqrstuvwxyz";

int main(){
  cin>>N>>s;
  ll ans=0;
  for(l_last=1;l_last<N-1;l_last++){
    ll tmp=0;
    for(ll i=0;i<26;i++){
      bool lfl=false,rfl=false;
      for(ll j=0;j<l_last;j++){
        if(s[j]==alp[i])lfl=true;
      }
      for(ll j=l_last;j<N;j++){
        if(s[j]==alp[i])rfl=true;
      }
      if(lfl&&rfl)tmp++;
    }
    ans=max(ans,tmp);
  }
  cout<<ans<<endl;
  return 0;
}
