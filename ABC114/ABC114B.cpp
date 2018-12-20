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


int main() {
    string s,str;
    ll ans;
    cin>>s;
    ans=inf;
    ll len=s.length();
    for(ll i=0;i+3<=len;i++){
//        cout<<s<<" "<<stoll(s.substr(i,3))<<endl;

        ans=min(ans,abs(753-stoll(s.substr(i,3))));
    }
    cout<<ans<<endl;
    return 0;
}
