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

ll a[3];
string s;

int main(){
  cin>>s;
  for(ll i=0;i<3;i++){
    if(s[i]=='a')a[0]++;
    else if(s[i]=='b')a[1]++;
    else if(s[i]=='c')a[2]++;

  }
  if(a[0]==1&&a[1]==1&&a[2]==1)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;


  return 0;
}
