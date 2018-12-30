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
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>
#include <cstdlib>
#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=50;

bool visited[nmax+1][nmax+1];
ll field[nmax+1][nmax+1];

ll h,w;

ll dx[8]={1,0,-1,0,1,1,-1,-1};
ll dy[8]={0,1,0,-1,1,-1,1,-1};

map<ll,ll> mp;

void factor(ll n){
    for(ll i=2;i<=floor(sqrt(n));i++){
        if(n%i==0){
            while(n%i==0){
            mp[i]++;
            n/=i;
            }
        }
    }
    if(n!=1)mp[n]++;
}

int main() {
    ll n,len;
    cin>>n;

    for(ll i=2;i<=n;i++){
        factor(i);
    }
    vector<ll> v;
    ll up;
    ll lis[5]={3,5,15,25,75};
    v.push_back(1);
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {

        if(itr->second+1>=75)up=5;
        else if(itr->second+1>=25)up=4;
        else if(itr->second+1>=15)up=3;
        else if(itr->second+1>=5)up=2;
        else if(itr->second+1>=3)up=1;
        else up=0;
        len=v.size();
        for(ll i=0;i<up;i++){
            for(ll j=0;j<len;j++){
                v.push_back(v[j]*lis[i]);
            }
        }

      }
      ll ct=0;
      for(ll i=0;i<v.size();i++){
          //cout<<v[i]<<" ";
          if(v[i]==75)ct++;
      }
      //cout<<endl;
      cout<<ct<<endl;
    return 0;
}
