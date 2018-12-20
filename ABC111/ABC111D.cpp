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
#include <set>
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=50;


int main(){
    ll n,modxy,m,d[33];
    cin>>n;
    ll x[n],y[n],u[n],v[n];
    for(ll i=0;i<n;i++){
        cin>>x[i]>>y[i];
        if(i==0){
            modxy=abs((x[i]+y[i])%2);
        }
        else{
            if(modxy!=abs((x[i]+y[i])%2)){
                cout<<-1<<endl;
                return 0;
            }
        }
    }


    if(modxy==1){

        m=31;
        //ll d[32];
        d[0]=1;
        for(ll i=1;i<32;i++){
            d[i]=d[i-1]*2;
        }
        cout<<m<<endl;
        for(ll i=0;i<m;i++)cout<<d[i]<<" ";
        cout<<endl;

        for(ll j=0;j<n;j++){
            u[j]=(x[j]+y[j]+(pow(2,31)-1))/2;
            v[j]=(x[j]-y[j]+(pow(2,31)-1))/2;

            ll uarr[m],varr[m];
            for(ll i=0;i<m;i++){
                uarr[i]=0;
                varr[i]=0;
            }
            for(ll i=0;i<31;i++){
                if((u[j]%d[i+1])!=0){
                    uarr[i]=1;
                    u[j]-=d[i];
                }
                if((v[j]%d[i+1])!=0){
                    varr[i]=1;
                    v[j]-=d[i];
                }
            }
            string s="";
            for(ll i=0;i<m;i++){
                if(uarr[i]==1&&varr[i]==1) s+="R";
                else if(uarr[i]==1&&varr[i]==0) s+="U";
                else if(uarr[i]==0&&varr[i]==1) s+="D";
                else if(uarr[i]==0&&varr[i]==0) s+="L";
            }
            cout<<s<<endl;
/*
            ll a,b;
            a=0;b=0;
            for(ll i=0;i<m;i++){
                if(s[i]=='R')a+=d[i];
                else if(s[i]=='L')a-=d[i];
                else if(s[i]=='U')b+=d[i];
                else if(s[i]=='D')b-=d[i];
            }
            cout<<a<<","<<b<<endl;
*/
        }
    }

    else if(modxy==0){
        m=32;

        d[0]=1;
        d[1]=1;
        for(ll i=2;i<33;i++){
            d[i]=d[i-1]*2;
        }
        cout<<m<<endl;
        for(ll i=0;i<m;i++)cout<<d[i]<<" ";
        cout<<endl;

        for(ll j=0;j<n;j++){
            string s="";

            if(abs(x[j])>=abs(y[j])){
                if(x[j]>=0){
                    s+="R";
                    x[j]--;
                }
                else{
                    s+="L";
                    x[j]++;
                }
            }
            else{
                if(y[j]>=0){
                    s+="U";
                    y[j]--;
                }
                else{
                    s+="D";
                    y[j]++;
                }
            }
            //cout<<x[j]<<","<<y[j]<<endl;
            u[j]=x[j]+y[j];
            v[j]=x[j]-y[j];
            u[j]=(u[j]+(pow(2,31)-1))/2;
            v[j]=(v[j]+(pow(2,31)-1))/2;



            ll uarr[m],varr[m];
            for(ll i=1;i<m;i++){
                uarr[i]=0;
                varr[i]=0;
            }
            for(ll i=1;i<32;i++){
                if((u[j]%d[i+1])!=0){
                    uarr[i]=1;
                    u[j]-=d[i];
                }
                if((v[j]%d[i+1])!=0){
                    varr[i]=1;
                    v[j]-=d[i];
                }
            }
            for(ll i=1;i<m;i++){
                if(uarr[i]==1&&varr[i]==1) s+="R";
                else if(uarr[i]==1&&varr[i]==0) s+="U";
                else if(uarr[i]==0&&varr[i]==1) s+="D";
                else if(uarr[i]==0&&varr[i]==0) s+="L";
            }
            cout<<s<<endl;
/*
            ll a,b;
            a=0;b=0;
            for(ll i=0;i<m;i++){
                if(s[i]=='R')a+=d[i];
                else if(s[i]=='L')a-=d[i];
                else if(s[i]=='U')b+=d[i];
                else if(s[i]=='D')b-=d[i];
            }
            cout<<a<<","<<b<<endl;
*/
        }
    }

    return 0;
}
