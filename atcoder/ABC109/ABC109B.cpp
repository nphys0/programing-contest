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
    ll n;
    cin>>n;
    string s[n];
    bool fl=true;
    for(ll i=0;i<n;i++){
        if(!(fl))break;
        cin>>s[i];
        if(i!=0){
            if(s[i-1][s[i-1].length()-1]!=s[i][0]){
                fl=false;
            }
            for(ll j=0;j<i;j++){
                if(s[i]==s[j]){
                    fl=false;
                    break;
                }
            }
        }
    }
    if(fl) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
