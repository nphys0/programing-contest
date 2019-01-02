#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <bitset>
#include <numeric>
#include <unordered_set>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <numeric>
#include <cstdlib>
#include <random>
#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
//typedef vector<ll> vec;
//typedef vector<vec> mat;

const ll mod=1000000007ll;
const ll inf=1000000000000000ll;

ll x[3],y[3],x_sort[3],y_sort[3];

int main(){
  for(ll i=0;i<3;i++){
    cin>>x[i]>>y[i];
  }
  for(ll i=0;i<3;i++){
    x_sort[i]=x[i];
    y_sort[i]=y[i];
  }
  sort(x_sort,x_sort+3);
  sort(y_sort,y_sort+3);
  ll xmax,xmin,xmed,ymax,ymin,ymed;
  xmax=x_sort[0];
  xmed=x_sort[1];
  xmin=x_sort[2];

  ymax=y_sort[0];
  ymed=y_sort[1];
  ymin=y_sort[2];
  ll num=abs(x[0]-xmed)+abs(y[0]-ymed)+abs(x[1]-xmed)+abs(y[1]-ymed)+abs(x[2]-xmed)+abs(y[2]-ymed)+1;
  cout<<num<<endl;
  for(ll i=0;i<3;i++){
    ll xpos=x[i],ypos=y[i];
    if(xpos<=xmed&&ypos<=ymed){
      while(xpos!=xmed){
        cout<<xpos<<" "<<ypos<<endl;
        xpos++;
      }
      while(ypos!=ymed){
        cout<<xpos<<" "<<ypos<<endl;
        ypos++;
      }
    }

    if(xpos<=xmed&&ypos>ymed){
      while(xpos!=xmed){
        cout<<xpos<<" "<<ypos<<endl;
        xpos++;
      }
      while(ypos!=ymed){
        cout<<xpos<<" "<<ypos<<endl;
        ypos--;
      }
    }

    if(xpos>xmed&&ypos<=ymed){
      while(xpos!=xmed){
        cout<<xpos<<" "<<ypos<<endl;
        xpos--;
      }
      while(ypos!=ymed){
        cout<<xpos<<" "<<ypos<<endl;
        ypos++;
      }
    }

    if(xpos>xmed&&ypos>ymed){
      while(xpos!=xmed){
        cout<<xpos<<" "<<ypos<<endl;
        xpos--;
      }
      while(ypos!=ymed){
        cout<<xpos<<" "<<ypos<<endl;
        ypos--;
      }
    }

    if(i==0 && xpos==xmed && ypos==ymed){
      cout<<xmed<<" "<<ymed<<endl;
    }
  }

  return 0;
}
