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

const ll MAX_N=50;

ll N,A,x[MAX_N];
vector<ll> minvec,zerovec,plusvec;


int main(){
  cin>>N>>A;
  for(ll i=1;i<=N;i++){
    cin>>x[i];
    x[i]-=A;
    if(x[i]>0)plusvec.push_back(x[i]);
    else if(x[i]<0)minvec.push_back(x[i]);
    else if(x[i]==0)zerovec.push_back(x[i]);
  }
  
  return 0;
}
