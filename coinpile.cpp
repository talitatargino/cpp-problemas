#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if((a+b)%3==0 and max(a,b)<=min(a,b)*2){
        cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}