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


int main(){
    ll r,L,n,edgenum;
    cin>>L;
    vector<ll> st,en,cost;
    for(ll i=0;pow(2,i)<=L;i++){
        r=i;
    }
    n=r+1;

    for(ll i=1;i<n;i++){
        //cout<<i<<" "<<i+1<<" "<<pow(2,i-1)<<endl;
        st.push_back(i);
        en.push_back(i+1);
        cost.push_back(pow(2,i-1));
        //cout<<i<<" "<<i+1<<" "<<0<<endl;
        st.push_back(i);
        en.push_back(i+1);
        cost.push_back(0);

        edgenum+=2;
    }
    //cout<<"a"<<L-pow(2,r)<<endl;

    for(ll t=n-1;1<=t;t--){
        //cout<<t<<" "<<(L-pow(2,r))<<" "<<pow(2,t-1)<<endl;
        if((L-pow(2,r))>=pow(2,t-1)){
            //cout<<t<<" "<<n<<" "<<L-pow(2,t-1)<<endl;
            st.push_back(t);
            en.push_back(n);
            cost.push_back(L-pow(2,t-1));

            L-=pow(2,t-1);
            edgenum++;
        }
    }

    cout<<n<<" "<<edgenum<<endl;
    for(ll i=0; i<edgenum;i++){
        cout<<st[i]<<" "<<en[i]<<" "<<cost[i]<<endl;
    }

    return 0;
}
