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

const ll MAX_N=2*100010;

ll n,a[MAX_N][2];
bool used[MAX_N];

int main(){
  cin>>n;
  for(ll i=1;i<=n;i++){
    cin>>a[i][0];
    cin>>a[i][1];
  }
  ll pos=1;
  used[1]=true;
  for(ll i=0;i<n;i++){
    cout<<pos<<" ";
    for(ll j=0;j<2;j++){
      if(!used[a[pos][j]]){
        ll next=a[pos][j];
        if(a[next][j]==a[pos][1-j]||a[next][1-j]==a[pos][1-j]){
          pos=next;
          used[pos]=true;
          break;
        }
      }
      else continue;
    }
  }
  cout<<endl;
  return 0;
}
