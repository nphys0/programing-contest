#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
/*
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

const ll MAX_N=100010,MAX_K=1010;

ll N,K;
ll x,y,rect[4*MAX_K][4*MAX_K];
char c;

ll sum_rect(ll x_bottom,ll y_bottom,ll h,ll w){
  return rect[x_bottom+h][y_bottom+w]-rect[x_bottom][y_bottom+w]
            -rect[x_bottom+h][y_bottom]+rect[x_bottom][y_bottom];
}

int main(){
  cin>>N>>K;
  for(ll i=0;i<N;i++){
    cin>>x>>y>>c;
    if(c=='W'){
      x+=K;
    }
    rect[x%(2*K)][y%(2*K)]++;
  }

  for(ll i=0;i<2*K;i++){
    for(ll j=0;j<2*K;j++){
      rect[i+2*K][j+2*K]=rect[i][j];
      rect[i+2*K][j]=rect[i][j];
      rect[i][j+2*K]=rect[i][j];
    }
  }

  for(ll i=0;i<4*K;i++){
    for(ll j=1;j<4*K;j++){
      rect[i][j]+=rect[i][j-1];
    }
  }

  for(ll i=1;i<4*K;i++){
    for(ll j=0;j<4*K;j++){
      rect[i][j]+=rect[i-1][j];
    }
  }

  ll ans=0;
  ll tmp;
  for(ll i=0;i<2*K;i++){
    for(ll j=0;j<2*K;j++){
      tmp=0;
      tmp+=sum_rect(i+K,j+K,K,K);
      tmp+=sum_rect(i,j,K,K);
      ans=max(tmp,ans);
    }
  }
  cout<<ans<<endl;

  return 0;
}
