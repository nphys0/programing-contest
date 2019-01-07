#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
/*
#include <fstream>
#include <sstream>
#include <iomanip>
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
#include <random>
#include <bits/stdc++.h>
*/

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
//typedef vector<ll> vec;
//typedef vector<vec> mat;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll MAX_N=200010;

ll N;
ll t[MAX_N],x[MAX_N],y[MAX_N];

int main(){
  cin>>N;

  ll ax,ay;
  for(ll i=0;i<N;i++){
    cin>>t[i]>>x[i]>>y[i];
  }
  bool fl=true;
  for(ll i=0;i<N;i++){
    ax=abs(x[i]);ay=abs(y[i]);
    if(t[i]<(ax+ay) || t[i] % 2ll!=(ax+ay)%2ll){
      fl=false;
    }
  }
  if(fl)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
