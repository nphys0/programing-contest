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
    ll n,y,ans1,ans2,ans3;
    cin>>n>>y;
    bool fl=false;
    for(ll i=0;i<=n;i++){
        if(fl)break;
        for(ll j=0;j<=n;j++){
            if(fl)break;
            if(10000*i+5000*j+1000*(n-i-j)==y&&(n-i-j)>=0){
                ans1=i;
                ans2=j;
                ans3=n-i-j;
                fl=true;
            }
        }
    }
    if(fl){
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }
    else{
        cout<<-1<<" "<<-1<<" "<<-1<<endl;
    }

    return 0;
}
