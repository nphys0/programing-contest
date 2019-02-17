#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, int> mp;
    int N,tmp;
    cin>>N;
    for(int i=0;i<N;i++){
      cin>>tmp;
      mp[tmp]++;
    }
    int ans=0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
      ans++;
    }
    cout<<ans<<endl;
    return 0;
}
