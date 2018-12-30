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

const ll MAX_N=1000000;

ll N,a[MAX_N];

int main(){
  cin>>N;
  a[0]=0;
  for(ll i=1;i<=N;i++)cin>>a[i];
  a[N+1]=0;
  ll asum=0;
  for(ll i=0;i<=N;i++){
    asum+=abs(a[i+1]-a[i]);
  }
  for(ll i=1;i<=N;i++){
    cout<<(asum-abs(a[i]-a[i-1])-abs(a[i+1]-a[i])+abs(a[i+1]-a[i-1]))<<endl;
  }
  return 0;
}
