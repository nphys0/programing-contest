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

ll N,M,X,v[MAX_N],a;

int main(){
  cin>>N>>M>>X;
  for(ll i=0;i<M;i++){
    cin>>a;
    v[a]++;
  }
  ll tmp1=0,tmp2=0;
  for(ll i=0;i<X;i++){
    tmp1+=v[i];
  }
  for(ll i=X;i<N;i++){
    tmp2+=v[i];
  }
  cout<<min(tmp1,tmp2)<<endl;
  return 0;
}
