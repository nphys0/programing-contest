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

const ll MAX_N=100;

ll N,a[2][MAX_N];

int main(){
  cin>>N;
  for(ll i=0;i<N;i++){
    cin>>a[0][i];
  }
  for(ll i=0;i<N;i++){
    cin>>a[1][i];
  }

  ll ans=0;
  for(ll i=0;i<N;i++){
    ll tmp=0;
    for(ll j=0;j<i;j++){
      tmp+=a[0][j];
    }
    tmp+=a[0][i];
    for(ll j=i;j<N;j++){
      tmp+=a[1][j];
    }
    ans=max(ans,tmp);
  }
  cout<<ans<<endl;
  return 0;
}
