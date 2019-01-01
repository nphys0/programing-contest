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


string s,t;

int main(){
  cin>>s>>t;
  ll len=s.length();
  for(ll i=0;i<=len;i++){
    s=s[len-1]+s.substr(0,len-1);
//    cout<<s<<endl;
    if(s==t){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}
