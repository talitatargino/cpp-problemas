#include <bits/stdc++.h>
using namespace std;
int main(){
    int j;
    cin>>j;
    int x,n,m;
    while(j--){
    cin>>x>>n>>m;
    while(n>0 and x>20){
        x=(x/2)+10;
        n--;}
        x-=m*10;
    if(x<=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
}