#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int v;cin>>v;
        int ans=0;
        if(v%3!=0 and v!=1)cout<<-1<<endl;
        else{while(v!=1){
            if(v%6==0){
                v/=6;
                ans++;
            }
            else{
                v*=2;
                ans++;
            }
        }}
        cout<<ans<<endl;
    }
}