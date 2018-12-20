#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <unordered_map>
#include <bitset>
#include <numeric>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=50;

ll d[nmax][nmax],a[nmax][nmax];
P edge[nmax];
ll n;
bool visited[nmax],allvisited;

void dfs(ll c){
    visited[c]=true;
    for(ll i=0;i<n;i++){
        if(d[c][i]==1&&!(visited[i])){
            dfs(i);
            }
        }
    }


int main(){
    ll m,a,b,ans;
    cin>>n>>m;
    ans=0;
    for(ll i=0;i<m;i++){
        cin>>a>>b;
        edge[i]=P(a-1,b-1);
    }
    for(ll ct=0;ct<n;ct++){
        for(ll ct2=0;ct2<n;ct2++){
            if(ct==ct2)d[ct][ct2]=0;
            else d[ct][ct2]=inf;
        }
    }
    for(ll ct=0;ct<m;ct++){
        d[edge[ct].first][edge[ct].second]=1;
        d[edge[ct].second][edge[ct].first]=1;
    }

    for(ll i=0;i<m;i++){
        d[edge[i].first][edge[i].second]=inf;
        d[edge[i].second][edge[i].first]=inf;

        for(ll j=0;j<n;j++)visited[j]=false;
        dfs(0);

        allvisited=true;
        for(ll i=0;i<n;i++){
            if(!(visited[i])){
                allvisited=false;
                break;
            }
        }
        if(!(allvisited)) ans++;


        d[edge[i].first][edge[i].second]=1;
        d[edge[i].second][edge[i].first]=1;
    }
    cout<<ans<<endl;
    return 0;
}
