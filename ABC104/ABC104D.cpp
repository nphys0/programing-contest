#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
using namespace std;
using ll=long long;
typedef pair<ll,ll> P;

//const ll nmax=100001;
const ll inf=1000000000+7;
const ll smax=100000;
ll dp[smax+1][4];

int main(){
    ll m1,m2;
    string abc="ABC";
    string s;
    cin>>s;
    dp[0][0]=1;

    //for(ll j=0;j<=3;j++){
    //    for(ll i=1;i<=s.length();i++){

    for(ll i=1;i<=s.length();i++){
        for(ll j=0;j<=3;j++){

            if(s[i-1]=='?')m1=3ll;
            else m1=1ll;
            if(s[i-1]==abc[j-1]||s[i-1]=='?') m2=1ll;
            else m2=0ll;

            //cout<<"i:"<<i<<", j:"<<j<<", m1:"<<m1<<", m2:"<<m2<<endl;

            if(j==0) dp[i][j]=dp[i-1][j]*m1;
            else dp[i][j]=m1*dp[i-1][j]+m2*dp[i-1][j-1];
            dp[i][j]%=inf;
        }
    }
    cout<<dp[s.length()][3]%inf<<endl;
    /*for(ll i=0;i<=s.length();i++){
        for(ll j=0;j<=3;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}
