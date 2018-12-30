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

const ll MAX_N=2*100000;

ll N,a[MAX_N];

int main(){
  ll N;
  cin>>N;
  for(ll i=0;i<N;i++){
    cin>>a[i];
    a[i]-=(i+1);
  }
  sort(a,a+N);
  ll b=a[N/2];
  ll ans=0;
  for(ll i=0;i<N;i++){
    ans+=abs(a[i]-b);
  }
  cout<<ans<<endl;
  return 0;
}
