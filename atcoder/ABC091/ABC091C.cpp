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

const ll MAX_N=110;

ll N,M;

bool used[MAX_N];

int main(){
  cin>>N;
  ll atmp,btmp;
  P red[N],blue[N];
  for(ll i=0;i<N;i++){
    cin>>atmp>>btmp;
    red[i].first=btmp;
    red[i].second=atmp;
  }
  sort(red,red+N,greater<>());
  ll ctmp,dtmp;
  for(ll i=0;i<N;i++){
    cin>>ctmp>>dtmp;
    blue[i].first=ctmp;
    blue[i].second=dtmp;
  }
  sort(blue,blue+N);
  ll ans=0;
  for(ll i=0;i<N;i++){
    for(ll j=0;j<N;j++){
      if(red[j].first<blue[i].second&&red[j].second<blue[i].first&&!(used[j])){
        used[j]=true;
        ans++;
        break;
      }
    }
  }

  cout<<ans<<endl;


  return 0;
}
