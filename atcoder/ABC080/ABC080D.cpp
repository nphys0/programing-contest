#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll=long long;

const int N_MAX=100000;
int N, C,ans,st,tt,ct;
int s[N_MAX+1],t[N_MAX+1],ch[N_MAX+1];
int tl[2*(N_MAX+1)],sl[2*(N_MAX+1)];

int main(){
    cin>>N>>C;
    for(int i=0;i<N;i++){
        cin>>s[i]>>t[i]>>ch[i];
        s[i]=s[i]*2-1;
        t[i]=t[i]*2;
        ch[i]--;
    }

    for(int i=0;i<C;i++){
        for(int j=0;j<N;j++){
            if(ch[j]==i){
                for(int k=s[j];k<t[j];k++){
                    tl[k]++;
                }
            }
        }
        for(int j=0;j<2*(N_MAX+1);j++){
            if(tl[j]>0){
                sl[j]+=1;
            }
            tl[j]=0;
        }
    }
    ans=0;
    for(int i=0;i<2*(N_MAX+1);i++){
//    for(int i=0;i<2*(15+1);i++){
        //cout<<ans<<endl;
        ans=max(ans,sl[i]);
    }
    cout<<ans<<endl;
    return 0;
}
