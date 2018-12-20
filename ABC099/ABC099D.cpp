#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using namespace std;
using ll=long long;

const ll nmax=500;
const ll cmax=30;
ll c0[cmax+1],c1[cmax+1],c2[cmax+1];
ll d[cmax+1][cmax+1];

int main(){
    ll N,C;
    cin>>N>>C;
    for(ll i=1;i<=C;i++){
        for(ll j=1;j<=C;j++){
            cin>>d[i][j];
        }
    }
    ll ctm;
    for(ll i=1;i<=N;i++){
        for(ll j=1;j<=N;j++){
            cin>>ctm;
            if((i+j)%3==0) c0[ctm]++;
            if((i+j)%3==1) c1[ctm]++;
            if((i+j)%3==2) c2[ctm]++;
        }
    }
//    for(ll i=0;i<ct0;i++)cout<<c0[i]<<" ";
//    cout<<endl;
//    for(ll i=0;i<ct1;i++)cout<<c1[i]<<" ";
//    cout<<endl;
//    for(ll i=0;i<ct2;i++)cout<<c2[i]<<" ";
//    cout<<endl;
    ll ans=100000000*3;
    for(ll i=1;i<=C;i++){
        for(ll j=1;j<=C;j++){
            for(ll k=1;k<=C;k++){
                if(i!=j&&j!=k&&i!=k){
                    ll ct=0;
                    for(ll l=1;l<=C;l++){
                        ct+=c0[l]*d[l][i]+c1[l]*d[l][j]+c2[l]*d[l][k];
                    }
                ans=min(ans,ct);
            }
        }
    }
}
    cout<<ans<<endl;


    return 0;
}
