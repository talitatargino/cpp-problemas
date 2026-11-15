#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int v;cin>>v;
        int ans=v/2;
        if(v%2==0){
            ans--;
        }
        cout<<ans<<endl;
    }
}
