#include <iostream>
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


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=2*100000+1;

int main(){
    vector<ll> vec0,vec1,vec2,vec3;
    ll n,wm,w,v,w0,ct0,ct1,ct2,ct3,tmp,ans;
    cin>>n>>wm;
    ct0=ct1=ct2=ct3=0;
    for(ll i=0;i<n;i++){
        cin>>w>>v;
        if(i==0){
            w0=w;
            vec0.push_back(v);
            ct0++;
            continue;
        }
        if(w==w0){
            vec0.push_back(v);
            ct0++;
        }
        else if(w==w0+1){
            vec1.push_back(v);
            ct1++;
        }
        else if(w==w0+2){
            vec2.push_back(v);
            ct2++;
        }
        else if(w==w0+3){
            vec3.push_back(v);
            ct3++;
        }
    }
    sort(vec0.begin(),vec0.end(),greater<ll>());
    sort(vec1.begin(),vec1.end(),greater<ll>());
    sort(vec2.begin(),vec2.end(),greater<ll>());
    sort(vec3.begin(),vec3.end(),greater<ll>());
    ans=0;
    for(ll i=0;i<=ct0;i++){
        for(ll j=0;j<=ct1;j++){
            for(ll k=0;k<=ct2;k++){
                for(ll l=0;l<=ct3;l++){
                    tmp=0;
                    tmp+=accumulate(vec0.begin(), vec0.begin()+i, 0);
                    tmp+=accumulate(vec1.begin(), vec1.begin()+j, 0);
                    tmp+=accumulate(vec2.begin(), vec2.begin()+k, 0);
                    tmp+=accumulate(vec3.begin(), vec3.begin()+l, 0);
                    if(i*w0+j*(w0+1)+k*(w0+2)+l*(w0+3)<=wm&&ans<tmp){
                        ans=tmp;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
