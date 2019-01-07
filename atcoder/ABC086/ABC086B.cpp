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

const ll MAX_N=200010;

ll a,b;

int main(){
  cin>>a>>b;
  int num=stoi(to_string(a)+to_string(b));
  bool fl=false;
  for(ll i=0;i<=2000;i++){
    if(i*i==num)fl=true;
  }
  if(fl)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
