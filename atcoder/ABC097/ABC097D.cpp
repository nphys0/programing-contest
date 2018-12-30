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

const ll nmax=100010;

class unionfind{
public:
    ll par[nmax];
    ll rank[nmax];

    unionfind(ll n){
        for(ll i=0;i<n;i++){
            par[i]=i;
            rank[i]=0;
        }
    }

    ll root(ll x){
        if(par[x]==x)return x;
        else return par[x]=root(par[x]);
    }

    void unite(ll x,ll y){
        x=root(x);
        y=root(y);
        if(x==y) return;

        if(rank[x]<rank[y]) par[x]=y;
        else{
            par[y]=x;
            if(rank[x]==rank[y]) rank[x]++;
        }
    }

    bool same(ll x,ll y){
        return root(x)==root(y);
    }
};

int main(){
  ll N,M,x,y;
  cin>>N>>M;
  ll pl[N];
  for(ll i=0;i<N;i++){
    cin>>pl[i];
    pl[i]--;
  }
  unionfind u(N);
  for(ll i=0;i<M;i++){
    cin>>x>>y;
    x--;y--;
    u.unite(x,y);
  }
  ll ans=0;
  for(ll i=0;i<N;i++){
    if(u.same(i,pl[i]))ans++;
  }
  cout<<ans<<endl;
  return 0;
}
