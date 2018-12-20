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

const ll nmax=2*100000+1;

ll lis[9];

int main(){
    ll n,a,tmp,amin,amax;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a;
        for(ll j=0;j<8;j++){
            if(400*j<=a && a<=400*(j+1)-1) lis[j]=1;
        }
        if(400*8<=a) lis[8]++;
    }

    amin=accumulate(lis,lis+8,0);
    amax=accumulate(lis,lis+9,0);
    if(lis[8]>0&&amin==0){
        amin=1;
    }
    cout<<amin<<" "<<amax<<endl;
    return 0;
}
