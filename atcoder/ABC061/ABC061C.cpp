#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>
#include <map>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;


int main(){
    map<ll,ll> mp;
    ll N,K,a,b;
    cin>>N>>K;
    for(ll i=0;i<N;i++){
        cin>>a>>b;
        mp[a]+=b;
    }
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        a=itr->first;
        K-=itr->second;
        if(K<=0){
            break;
        }
    }
    cout<<a<<endl;
    return 0;
}
