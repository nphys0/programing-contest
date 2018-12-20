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
typedef pair<int,int> P;

const int nmax=100001;
P ab[nmax];


int main(){
    ll N,M;
    cin>>N>>M;
    for(int i=0;i<M;i++) cin>>ab[i].second>>ab[i].first;
    sort(ab,ab+M);
    ll bt=ab[0].first;
    ll ct=1;
    for(int i=1;i<M;i++){
        if(bt<=ab[i].second){
            ct++;
            bt=ab[i].first;
        }
    }
    cout<<ct<<endl;
    return 0;
}
