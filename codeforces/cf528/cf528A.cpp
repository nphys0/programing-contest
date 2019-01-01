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

string s;

int main(){
  cin>>s;
  ll len=s.length();
  ll l,r;
  string ans="";
  if(len%2==0){
    l=len/2 - 1;r=l+1;
    while(true){
      ans+=s[l];
      l--;
      ans+=s[r];
      r++;
      if((r-l)>len)break;
    }
  }
  else{
    l=len/2;r=l+1;
    while(true){
      ans+=s[l];
      l--;
      ans+=s[r];
      r++;

      if((r-l)>len)break;
    }
  }
  cout<<ans<<endl;

  return 0;
}
