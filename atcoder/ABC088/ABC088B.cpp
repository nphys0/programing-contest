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

ll n,a[MAX_N];

int main(){
  cin>>n;
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n,greater<>());
  /*
  for(ll i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  */
  ll alice=0,bob=0;
  for(ll i=0;i<n;i+=2)alice+=a[i];
  for(ll i=1;i<n;i+=2)bob+=a[i];
  cout<<(alice-bob)<<endl;
  return 0;
}
