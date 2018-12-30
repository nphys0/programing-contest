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

const ll MAX_N=200000;

ll N,X[MAX_N],X_sorted[MAX_N];

int main(){
  cin>>N;
  for(ll i=0;i<N;i++){
    cin>>X[i];
    X_sorted[i]=X[i];
  }
  sort(X_sorted,X_sorted+N);
  ll med1=X_sorted[(N/2)-1],med2=X_sorted[N/2];
  for(ll i=0;i<N;i++){
    if(X[i]<=med1)cout<<med2<<endl;
    else cout<<med1<<endl;
  }
  return 0;
}
