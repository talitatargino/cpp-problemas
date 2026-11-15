#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    int ans=0;
    while(t--){
        cin>>a>>b;
        if ((b-a)>=2)ans++;
    }
    cout<<ans<<endl;
}