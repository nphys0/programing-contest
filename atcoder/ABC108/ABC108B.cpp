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
    ll x1,y1,x2,y2,dx,dy,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    dx=x2-x1;
    dy=y2-y1;
    x3=x2-dy;
    y3=y2+dx;
    x4=x3-dx;
    y4=y3-dy;
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    return 0;
}
