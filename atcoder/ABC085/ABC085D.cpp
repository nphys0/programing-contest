#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
using namespace std;
using ll=long long;

const int N_MAX=(100001);
ll a[N_MAX],b[N_MAX],N,H,amax,ct;

int main(){
    cin>>N>>H;
    for(int i=0;i<N;i++){
        cin>>a[i]>>b[i];
    }
    sort(a,a+N,greater<ll>());
    sort(b,b+N,greater<ll>());

    amax=a[0];
    ct=0;
    for(int i=0;((b[i]>amax)&&(H>0))&&i<N;i++){
        H-=b[i];
        ct++;
    }
    //cout<<ct<<" "<<H<<endl;
    if(H>0){
        ct+=((H+amax-1)/amax);

    }
    //ct+=max(0LL, (H + amax - 1) / amax);

    cout<<ct<<endl;
    return 0;
}
