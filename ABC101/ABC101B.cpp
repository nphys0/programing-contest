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

int main(){
  ll N;
  cin>>N;
  ll tmp=N;
  ll S=0;
  for(ll i=11;0<=i;i--){
    S+=(int)(tmp/pow(10,i));
//    cout<<tmp<<"/"<<pow(10,i)<<"="<<(int)(tmp/pow(10,i))<<endl;
    tmp-=pow(10,i)*(int)(tmp/pow(10,i));
  }
//  cout<<S<<endl;
  if(N%S==0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
