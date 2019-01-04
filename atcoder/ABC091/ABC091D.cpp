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

const ll MAX_N=200010;

ll N,M;
ll a[MAX_N],b[MAX_N],a_tmp[MAX_N],b_tmp[MAX_N];

int main(){
  cin>>N;
  for(ll i=0;i<N;i++){
    cin>>a[i];
  }
  for(ll i=0;i<N;i++){
    cin>>b[i];
  }
//  sort(b,b+N);
  ll ans=0;
  for(ll k=0;k<32;k++){
    ll mod2=(1LL<<(k+1));
//    cout<<mod2<<endl;
    for(ll i=0;i<N;i++){
      a_tmp[i]=a[i]%mod2;
      b_tmp[i]=b[i]%mod2;
    }
    sort(b_tmp,b_tmp+N);
    ll bitnum=0;
    ll t=1<<k;
    for(ll i=0;i<N;i++){
      bitnum+=upper_bound(b_tmp,b_tmp+N,2*t-1LL-a_tmp[i])-lower_bound(b_tmp,b_tmp+N,t-a_tmp[i]);
      bitnum+=upper_bound(b_tmp,b_tmp+N,4*t-1LL-a_tmp[i])-lower_bound(b_tmp,b_tmp+N,3*t-a_tmp[i]);
    }
//    cout<<bitnum<<endl;
    if(bitnum%2==1)ans+=(1LL<<k);
  }
  cout<<ans<<endl;
  return 0;
}
