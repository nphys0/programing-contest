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


int main(){
  ll N,X;
  cin>>N>>X;
  ll m[N];
  ll mmin=inf,msum=0;
  for(ll i=0;i<N;i++){
    cin>>m[i];
    mmin=min(mmin,m[i]);
    msum+=m[i];
  }
  cout<<(int)((X-msum)/mmin) +N<<endl;

}
