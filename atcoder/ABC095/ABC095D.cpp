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

ll arr[MAX_N+2],arr2[MAX_N+2],arr3[MAX_N+2],arr4[MAX_N+2],vsum[MAX_N+2],N,C,x[MAX_N+2],v[MAX_N+2];


int main(){
  cin>>N>>C;
  x[0]=0;v[0]=0;
  for(ll i=1;i<=N;i++){
    cin>>x[i]>>v[i];
  }
  x[N+1]=C;v[N+1]=0;

  ll vt=0;
  for(ll i=0;i<=N;i++){
    vt+=v[i];
    vsum[i]=vt;
    arr[i]=vt-x[i];
    arr3[i]=vt-2*x[i];
  }

  ll armax=arr[0],armax4=0;
  for(ll i=0;i<=N;i++){
    armax=max(armax,arr[i]);
    arr2[i]=armax;
    armax4=max(armax4,arr3[i]);
    arr4[i]=armax4;
  }

  ll ans=arr2[N];
  for(ll i=0;i<N;i++){
    ll tmp1=(vsum[N]-vsum[i])-2*(C-x[i+1])+arr2[i];
    ll tmp2=(vsum[N]-vsum[i])-(C-x[i+1])+arr4[i];
    ans=max(ans,max(tmp1,tmp2));
  }
  cout<<ans<<endl;
  return 0;
}
