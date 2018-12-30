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

const ll MAX_N=1000;

ll N,pn;


int main(){
  cin>>N;
  bool fl=false;
  ll tmp;
  for(ll i=0;i<N;i++){
    cin>>tmp;
    if(tmp%2==1){
      fl=true;
      break;
    }
  }
  if(fl)cout<<"first"<<endl;
  else cout<<"second"<<endl;
  return 0;
}
