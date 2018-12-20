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
#include <set>
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

const ll nmax=50;


int main(){
    ll n,m,x,y,xmax,ymin,xa,ya;
    bool fl=false;
    cin>>n>>m>>xa>>ya;
    xmax=xa;
    ymin=ya;
    if (ya<=xa){
        fl=true;
    }

    else{
        for(ll i=0;i<n;i++){
        cin>>x;
        if(x>xmax)xmax=x;
        }
        for(ll i=0;i<m;i++){
        cin>>y;
        if(y<ymin)ymin=y;
        }
        if(xmax>=ymin){
            fl=true;
        }
    }
    //cout<<xmax<<","<<ymin<<endl;

    if(fl) {cout<<"War"<<endl;}
    else {cout<<"No War"<<endl;}
    return 0;
}
