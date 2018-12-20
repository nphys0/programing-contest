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


int main(){
    ll H,W,a,b,c;
    ll ans=inf;
    cin>>H>>W;
    for(ll h0=0;h0<=H;h0++){
        a=h0*W;
        b=((H-h0)/2)*W;
        c=(H-(h0+((H-h0)/2)))*W;
        ans=min(ans,max(max(a,b),c)-min(min(a,b),c));
    }
    for(ll h0=0;h0<=H;h0++){
        a=h0*W;
        b=(H-h0)*(W/2);
        c=(H-h0)*(W-(W/2));
        ans=min(ans,max(max(a,b),c)-min(min(a,b),c));
    }
    for(ll h0=0;h0<=W;h0++){
        a=h0*H;
        b=((W-h0)/2)*H;
        c=(W-(h0+((W-h0)/2)))*H;
        ans=min(ans,max(max(a,b),c)-min(min(a,b),c));
    }
    for(ll h0=0;h0<=W;h0++){
        a=h0*H;
        b=(W-h0)*(H/2);
        c=(W-h0)*(H-(H/2));
        ans=min(ans,max(max(a,b),c)-min(min(a,b),c));
    }
    cout<<ans<<endl;
    return 0;
}
