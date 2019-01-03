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

const ll MAX_N=110,MAX_V=220;

struct edge {
  ll to,cap,rev;
};

vector<edge> G[MAX_V];
bool used[MAX_V];

void add_edge(ll from,ll to,ll cap)
{
  G[from].push_back( (edge){ to,cap,(ll)G[to].size() } );
	G[to].push_back( (edge){ from,0,(ll)G[from].size()-1});
}

ll dfs(ll v,ll t,ll f)
{
	if (v==t)
		return f;
	used[v] = true;
	for (ll i=0; i<G[v].size(); ++i) {
		edge &e = G[v][i];
		if (!used[e.to] && e.cap>0) {
			ll d = dfs(e.to, t, min(f,e.cap));
			if (d > 0) {
				e.cap -= d;
				G[e.to][e.rev].cap += d;
				return d;
			}
		}
	}
	return 0;
}

ll max_flow(ll s,ll t)
{
	ll flow = 0;
	while(true){
		memset(used, 0, sizeof(used));
		ll f = dfs(s, t, inf);
		if (f==0) {
			return flow;
		}
		flow += f;
	}
}

ll N,M;
ll a[MAX_N],b[MAX_N],c[MAX_N],d[MAX_N];

int main(){
  cin>>N;
  ll s=2*N,t=s+1;

  for(ll i=0;i<N;i++){
    add_edge(s,i,1);
  }

  for(ll i=0;i<N;i++){
    add_edge(i+N,t,1);
  }

  ll tmpa,tmpb;
  for(ll i=0;i<N;i++){
    cin>>tmpa>>tmpb;
    a[i]=tmpa;
    b[i]=tmpb;
  }
  for(ll i=0;i<N;i++){
    cin>>tmpa>>tmpb;
    c[i]=tmpa;
    d[i]=tmpb;
  }

  for(ll i=0;i<N;i++){
    for(ll j=0;j<N;j++){
      if(a[i]<c[j]&&b[i]<d[j]){
        add_edge(i,N+j,1);
      }
    }
  }

  cout<<max_flow(s,t)<<endl;


  return 0;
}
