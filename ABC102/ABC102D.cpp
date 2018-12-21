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

const ll MAX_N=2*100000;

ll N,a[MAX_N];

int main(){
  cin>>N;
  ll tmp;
  for(ll i=0;i<N;i++){
    cin>>tmp;
    if(i==0)a[i]=tmp;
    else a[i]=a[i-1]+tmp;
  }
  ll ans=inf;
  ll first_last=0,third_last=2;
  for(ll second_last=1;second_last<N-2;second_last++){
    while(a[first_last]<=a[second_last]-a[first_last])first_last++;
    //first_last--;
    while(a[third_last]-a[second_last]<=a[N-1]-a[third_last])third_last++;
    //third_last--;
    ll n_max=max(a[N-1]-a[third_last],max(a[third_last]-a[second_last],max(a[first_last],a[second_last]-a[first_last])));
    ll n_min=min(a[N-1]-a[third_last],min(a[third_last]-a[second_last],min(a[first_last],a[second_last]-a[first_last])));
    ans=min(ans,n_max-n_min);

    if(first_last!=0){
      n_max=max(a[N-1]-a[third_last],max(a[third_last]-a[second_last],max(a[first_last-1],a[second_last]-a[first_last-1])));
      n_min=min(a[N-1]-a[third_last],min(a[third_last]-a[second_last],min(a[first_last-1],a[second_last]-a[first_last-1])));
      ans=min(ans,n_max-n_min);
    }
    if(third_last-1!=second_last){
      n_max=max(a[N-1]-a[third_last-1],max(a[third_last-1]-a[second_last],max(a[first_last],a[second_last]-a[first_last])));
      n_min=min(a[N-1]-a[third_last-1],min(a[third_last-1]-a[second_last],min(a[first_last],a[second_last]-a[first_last])));
      ans=min(ans,n_max-n_min);
    }
    if(first_last!=0&&third_last-1!=second_last){
      n_max=max(a[N-1]-a[third_last-1],max(a[third_last-1]-a[second_last],max(a[first_last-1],a[second_last]-a[first_last-1])));
      n_min=min(a[N-1]-a[third_last-1],min(a[third_last-1]-a[second_last],min(a[first_last-1],a[second_last]-a[first_last-1])));
      ans=min(ans,n_max-n_min);
    }

  }
  cout<<ans<<endl;
  return 0;
}
