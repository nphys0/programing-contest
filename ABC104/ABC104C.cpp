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


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;



int main(){
    ll D,G,ptm,ctm,ans,pct,tmp;
    vector<ll> p,c;
    cin>>D>>G;
    for(ll i=0;i<D;i++){
        cin>>ptm>>ctm;
        p.push_back(ptm);
        c.push_back(ctm);
    }
    ans=inf;
    for(ll i=0;i<(1<<D);i++){
        pct=0;
        tmp=0;
        for(ll j=0;j<D;j++){
            if(i&(1<<j)){
                tmp+=(p[D-j-1]*100*(D-j))+c[D-j-1];
                pct+=p[D-j-1];
            }
        }
        if(tmp>=G){
            ans=min(ans,pct);
        }
        else{
            for(ll j=0;j<D;j++){
                if(!(i&(1<<j))){
                    if(p[D-j-1]>(G-tmp+(100*(D-j)-1))/(100*(D-j))){
                        pct+=(G-tmp+(100*(D-j)-1))/(100*(D-j));
                        ans=min(pct,ans);
                    }
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}
