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

const ll MAX_N=100010;

ll N,a[MAX_N];

int main(){
  cin>>N;
  for(ll i=0;i<N;i++){
    cin>>a[i];
  }
  sort(a,a+N);
  ll amax=a[N-1];
  ll tmp=a[0];
  for(ll i=0;i<N-1;i++){
    if(abs(amax-tmp*2)>abs(amax-2*a[i]))tmp=a[i];
  }
  cout<<amax<<" "<<tmp<<endl;


  return 0;
}
