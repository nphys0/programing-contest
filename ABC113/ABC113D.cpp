#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>
#include <bitset>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;

const ll hmax=100;
const ll wmax=8;
ll dp[wmax+2][hmax+1];

const ll F[wmax+2]={0,1,1,2,3,5,8,13,21,34};

int main(){
    ll h,w,k;
    cin>>h>>w>>k;
    dp[1][0]=1;

    for(ll j=1;j<=h;j++){
        for(ll i=1;i<=w;i++){
            dp[i][j]=((F[i-1]*F[w-i+1]*dp[i-1][j-1])%mod+(F[i]*F[w-i]*dp[i+1][j-1])%mod+(F[i]*F[w-i+1]*dp[i][j-1])%mod)%mod;
        }
    }
    //for(ll i=1;i<=w;i++){
    //    for(ll j=0;j<=h;j++){
    //        cout<<"("<<i<<","<<j<<")"<<dp[i][j]<<" ";
    //    }
    //    cout<<endl;
    //}
    ll i=1;ll j=2;
    cout<<dp[k][h]<<endl;
    return 0;
}
