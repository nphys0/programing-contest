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


ll a,b;


int main(){
  cin>>a>>b;
  ll k1,k2,k3,k4,k5;
  ll ans=0,j;
  for(ll i=a;i<=b;i++){
    j=i;
    k1=j%10;
    j-=k1;
    k2=(j%100)/10;
    j-=k2*10;
    k3=j%1000/100;
    j-=k3*100;
    k4=j%10000/1000;
    j-=k4*1000;
    k5=j%100000/10000;
    if(i==10000*k1+1000*k2+100*k3+10*k4+k5){
//      cout<<i<<" "<<(10000*k1+1000*k2+100*k3+10*k4+k5)<<endl;
      ans++;
    }
  }
  cout<<ans<<endl;

  return 0;
}
