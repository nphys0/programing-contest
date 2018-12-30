#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

//const ll nmax=100001;
const ll inf=1000000000+7;
const ll nmax=100;
ll a[nmax];


int main(){
    ll N,sum,ans;
    cin>>N;
    sum=0;
    for(ll i=0;i<N;i++){
        cin>>a[i];
        sum+=a[i];
        a[i]*=N;
    }
    ll dif=inf;
    for(ll i=0;i<N;i++){
        if(abs(sum-a[i])<dif){
            dif=abs(sum-a[i]);
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
