#include <iostream>
#include <cmath>
#include <stack>
#include <string>
using namespace std;
using ll=long long;

const int nmax=55555;
int prime[nmax+1];
bool is_prime[nmax+1];
int p=0;

int sieve(int n){
    for(int i=0;i<=n;i++){
        is_prime[i]=true;
    }
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            prime[p]=i;
            p++;
            for(int j=2*i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }
}

int main(){
    int N;
    cin>>N;
    sieve(nmax);
//    int sp=sizeof(prime);
    int ans[N];
    int ct=0;

    for(int i=0;i<p;i++){
        if(prime[i]%5==1){
            ans[ct]=prime[i];
            ct++;
            if(ct==N){
                break;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<ans[i]<<" ";
//        cout<<p<<" ";
//        cout<<prime[p-1]<<" ";
    }
    cout<<endl;
}
