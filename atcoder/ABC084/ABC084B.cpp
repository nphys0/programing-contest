#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
  int a,b;
  string s,num;
  cin>>a>>b;
  cin>>s;

  num="0123456789";

  bool fl=false;

  for(int i=0;i<a;i++){
    bool fl2=false;
    for(int j=0;j<10;j++){
      if(s[i]==num[j]){
        fl2=true;
      }
    }
    if(!(fl2))fl=true;
  }

  if(s[a]!='-')fl=true;

  for(int i=a+1;i<a+b+1;i++){
    bool fl2=false;
    for(int j=0;j<10;j++){
      if(s[i]==num[j]){
        fl2=true;
      }
    }
    if(!(fl2))fl=true;
  }

  if(fl) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;

  return 0;
}
