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

ll n,k;

int main(){
  cin>>n>>k;
  ll a,b,tmp;
  ll ans=inf;
  for(ll i=1;i<=n;i++){
    if(n%i==0){
      a=i;b=n/i;
      tmp=a*k+b;
//      cout<<a<<" "<<b<<" "<<(ll)(tmp/k)<<" "<<tmp%k<<endl;
      if((ll)(tmp/k)==a && tmp%k==b){
//        cout<<a<<" "<<b<<" "<<a*k+b<<endl;
        ans=min(ans,a*k+b);
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
