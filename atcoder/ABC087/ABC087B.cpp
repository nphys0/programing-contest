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

ll x,a,b,c;

int main(){
  cin>>a>>b>>c>>x;
  ll ans=0;
  for(ll i=0;i<=a;i++){
    for(ll j=0;j<=b;j++){
      for(ll k=0;k<=c;k++){
        if((500*i+100*j+50*k)==x)ans++;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
