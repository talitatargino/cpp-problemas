#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else if(a<b){
            long long d=b-a;
            if (d%2==0)cout<<2<<endl;
            else cout<<1<<endl;
        }
        else{
            long long d=a-b;
            if (d%2==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}