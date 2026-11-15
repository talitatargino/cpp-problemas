#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>s(n);
    int mdc;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(i==0){
            mdc=s[0];}
        else{
        mdc=gcd(mdc,s[i]);}
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=(s[i]/mdc);
    }
    cout<<ans<<endl;
}