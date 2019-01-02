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

ll n,a,b,k;

int main(){
  cin>>n>>k;
  ll ans=0,tmp=0;
  for(ll i=k+1;i<=n;i++){
    tmp=0;
    tmp+=((n)/i)*(i-k);
    if(k==0){
      if((n-((n/i)*i))-(k) >=0)tmp+=(n-((n/i)*i))-(k);
    }
    else if((n-((n/i)*i))-(k-1) >=0)tmp+=(n-((n/i)*i))-(k-1);
//    cout<<i<<" "<<((n)/i)*(i-k)<<" "<<(n-((n/i)*i))-(k-1)<<endl;
    ans+=tmp;
  }
  cout<<ans<<endl;

  return 0;
}
