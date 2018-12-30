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


int main(){
    ll sx,sy,tx,ty,dx,dy;
    cin>>sx>>sy>>tx>>ty;
    dx=tx-sx;dy=ty-sy;
    string s="";
    for(int i=0;i<dx;i++) s+='R';
    for(int i=0;i<dy;i++) s+='U';
    for(int i=0;i<dx;i++) s+='L';
    for(int i=0;i<dy;i++) s+='D';
    s+='D';
    for(int i=0;i<dx+1;i++) s+='R';
    for(int i=0;i<dy+1;i++) s+='U';
    s+="LU";
    for(int i=0;i<dx+1;i++) s+='L';
    for(int i=0;i<dy+1;i++) s+='D';
    s+='R';

    cout<<s<<endl;
    return 0;
}
