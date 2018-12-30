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

const ll MAX_N=100000;

ll N,K,a[MAX_N+1];


int main(){
  cin>>N>>K;
  for(ll i=0;i<N;i++){
    cin>>a[i];
  }
  ll i=0,ans=0;
  while(N>0){
    if(i==0){
      N-=K;
      ans++;
    }
    else{
      N-=(K-1);
      ans++;
    }
    i++;
  }
  cout<<ans<<endl;
  return 0;
}
