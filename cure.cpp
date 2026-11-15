#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector<bool>drag(d+1,false);
    for(int i=1;i<=d;i++){
        if(i%k==0 or i%l==0 or i%m==0 or i%n==0){
            drag[i]=true;
        }
    }
    int ans=0;
    for(int i=1;i<=d;i++){
        if(drag[i])ans++;
    }
    cout<<ans;
}