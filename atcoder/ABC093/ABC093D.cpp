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

ll a,b,c,Q;

ll minc(ll x){
  ll left=0,right=1000000000;
  while(right-left>1){
    ll mid=(left+right)/2;
    if(x<=mid*mid)right=mid;
    else left=mid;
  }
  return left;
}

int main(){

  cin>>Q;
  for(ll i=0;i<Q;i++){
    cin>>a>>b;
    c=minc(a*b);
//    cout<<"c is"<<c<<endl;
    if(a==b)cout<<(2*a-2)<<endl;
    else if(c*(c+1)>=a*b)cout<<(2*c-2)<<endl;
    else cout<<(2*c-1)<<endl;
  }
  return 0;
}
