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
    string s,ans;
    ll num;
    cin>>s;


    for(ll p=0;p<(1<<(s.length()-1));p++){
        num=s[0]-'0';
        ans=s[0];
        for(ll i=0;i<s.length()-1;i++){
            if(p&(1<<i)){
                num-=s[i+1]-'0';
                ans=ans+'-'+s[i+1];
            }
            else{
                num+=s[i+1]-'0';
                ans=ans+'+'+s[i+1];
            }
        }
        if(num==7){
            break;
            }
        }
        cout<<ans+"=7"<<endl;
    }
