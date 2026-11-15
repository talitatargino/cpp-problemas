#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    long long a,b,x,y;
    cin>>x>>y;
    cin>>a>>b;
    long long ans=0;
    if(b<a*2){
    ans=min(x,y)*b+(abs(x-y))*a;}
    else{
    ans=(x+y)*a;}
    cout<<ans<<endl;
}}