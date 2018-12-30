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
//typedef vector<ll> vec;
//typedef vector<vec> mat;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll MAX_N=2*100000+10;

string s;

vector<string> vec(5);

int main(){
  cin>>s;
  for(ll i=0;i<5;i++){
    vec[i]="";
  }
  for(ll i=1;i<6;i++){
    for(ll j=0;j+i<=s.length();j++){
      string sub=s.substr(j,i);
//      cout<<sub<<endl;
      if(sub!=vec[0]&&sub!=vec[1]&&sub!=vec[2]&&sub!=vec[3]&&sub!=vec[4]){
        if(vec[0]==""||sub<vec[0]){
          vec[4]=vec[3];
          vec[3]=vec[2];
          vec[2]=vec[1];
          vec[1]=vec[0];
          vec[0]=sub;
        }
        else if(vec[1]==""||sub<vec[1]){
          vec[4]=vec[3];
          vec[3]=vec[2];
          vec[2]=vec[1];
          vec[1]=sub;
        }
        else if(vec[2]==""||sub<vec[2]){
          vec[4]=vec[3];
          vec[3]=vec[2];
          vec[2]=sub;
        }
        else if(vec[3]==""||sub<vec[3]){
          vec[4]=vec[3];
          vec[3]=sub;
        }
        else if(vec[4]==""||sub<vec[4])vec[4]=sub;
      }
    }
  }

  ll K;
  cin>>K;
  cout<<vec[K-1]<<endl;
  return 0;
}
