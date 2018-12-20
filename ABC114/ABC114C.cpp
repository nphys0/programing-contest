#include <iostream>
#include <fstream>
#include <sstream>
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
#include <vector>
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>
#include <cstdlib>
#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=50;

bool visited[nmax+1][nmax+1];
ll field[nmax+1][nmax+1];

ll h,w;

ll dx[8]={1,0,-1,0,1,1,-1,-1};
ll dy[8]={0,1,0,-1,1,-1,1,-1};

ll dfs(ll n){
    bool fl,fl3,fl5,fl7;
    stack<string> stk;
    stk.push("3");
    stk.push("5");
    stk.push("7");
    ll ct=0;
    while(!(stk.empty())){
        string t=stk.top();stk.pop();
        if(stoll("3"+t)<=n) stk.push("3"+t);
        if(stoll("5"+t)<=n) stk.push("5"+t);
        if(stoll("7"+t)<=n) stk.push("7"+t);
        //各桁チェック
        fl3=fl5=fl7=false;
        fl=true;
        for(ll j=0;j<t.length();j++){
            if((t[j]=='3')||(t[j]=='5')||(t[j]=='7')){
                if(t[j]=='3')fl3=true;
                if(t[j]=='5')fl5=true;
                if(t[j]=='7')fl7=true;
            }
            else{
                fl=false;
                break;
            }
        }
        if(fl&&fl3&&fl5&&fl7)ct++;
    }
    return ct;
}

int main() {
    ll n,ans;
    cin>>n;

    ans=dfs(n);

    cout<<ans<<endl;
    return 0;
}
