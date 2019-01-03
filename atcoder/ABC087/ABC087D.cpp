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

ll N,M,x[MAX_N];
bool no_in[MAX_N];


int main(){
  cin>>N>>M;
  vector<P> graph[N];
  queue<ll> q;
  for(ll i=0;i<N;i++){
    no_in[i]=true;
  }
  ll ltmp,rtmp,dtmp;
  for(ll i=0;i<M;i++){
    cin>>ltmp>>rtmp>>dtmp;
    ltmp--;
    rtmp--;
    graph[ltmp].push_back(P(rtmp,dtmp));
    no_in[rtmp]=false;
  }
  for(ll i=0;i<N;i++){
    x[i]=-1;
  }
  for(ll i=0;i<N;i++){
    if(no_in[i]){
      x[i]=0;
      q.push(i);
    }
  }
  bool fl=true;
  while(!q.empty()){
    ll pos=q.front();q.pop();
    for(ll i=0;i<graph[pos].size();i++){
      ll to=graph[pos][i].first;
      if(x[to]==-1){
        x[to]=x[pos]+graph[pos][i].second;
        q.push(to);
      }
      else{
        if(x[to]!=x[pos]+graph[pos][i].second){
          fl=false;
        }
      }
    }
  }
  for(ll i=0;i<N;i++){
    if(x[i]==-1)fl=false;
  }
  if(fl) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
