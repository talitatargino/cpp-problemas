#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int taxi[4]={};
    while(n--){
        int x;
        cin>>x;
        taxi[x-1]++;
}
int ans=taxi[3];
if (taxi[2]>0){
    if (taxi[0]>0){
        int x;x=min(taxi[0], taxi[2]);
        ans+=x;
        taxi[0]-=x;
        taxi[2]-=x;
        if (taxi[2]>0)ans+=taxi[2];
    }
    else{
        ans+=taxi[2];
    }
}
    ans+=(taxi[1]+1)/2;
    if (taxi[1]%2!=0 and taxi[1]>0){
        taxi[0]-=2;
    }
    ans+=(taxi[0]+3)/4;

cout<<ans<<endl;
}