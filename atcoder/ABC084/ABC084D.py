#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll=long long;

const int N_MAX=100001;
ll prime[N_MAX],ct[N_MAX],Q,l,r;
bool is_prime[N_MAX];

ll sieve(ll n){
    int p=0;
    for(int i=0;i<=n;i++){
        is_prime[i]=true;
    }
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            prime[p++]=i;
            for(int j=i+i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }
    for(int i=1;i<=N_MAX;i+=2){
        if(is_prime[i]&&is_prime[(i+1)/2]){
            ct[i]=1;
        }
    }
    for(int i=1;i<=N_MAX;i++){
        ct[i]=ct[i]+ct[i-1];
    }
    return p;
}


int main(){
    sieve(N_MAX-1);
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>l>>r;
        cout<<ct[r]-ct[l-1]<<endl;
    }
    return 0;
}
