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

ll len;
string s;
string low="abcdefghijklmnopqrstuvwxyz";
int main(){
  cin>>s;
  len=s.length();

  ll cct=0,cpos=0;
  for(ll i=2;i<len-1;i++){
    if(s[i]=='C'){
      cct++;
      cpos=i;
    }
  }
  bool fl=true;
  if(cct!=0){
    for(ll i=1;i<len;i++){
      bool lowc=false;
      for(ll j=0;j<26;j++){
        if(i!=cpos){
          if(s[i]==low[j])lowc=true;
        }
        else lowc=true;
      }
      if(!lowc)fl=false;
    }
  }
//  cout<<cpos<<" "<<fl<<endl;
  if(s[0]=='A'&&cct==1&&fl)cout<<"AC"<<endl;
  else cout<<"WA"<<endl;
  return 0;
}
