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

ll a,b,c;

int main(){
  cin>>a>>b>>c;
  ll ans=0;
  ll n1,n2,n3;
  if(a>=b&&a>=c){
    n1=a;
    n2=b;
    n3=c;
  }
  else if(b>=a&&b>=c){
    n1=b;
    n2=a;
    n3=c;
  }
  else{
    n1=c;
    n2=b;
    n3=a;
  }
  if((abs(n2-n3))%2==1){
    n1++;
    if(n2>n3)n3++;
    else n2++;
    ans++;
  }
  ans+=((n1-n2)+(n1-n3))/2;
  cout<<ans<<endl;
  return 0;
}
