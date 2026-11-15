#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int ans_atual=0;
    int ans=0;
    vector<int>valores(t);
    for(int i=0;i<t;i++){
        cin>>valores[i];
        if (i==0)ans_atual+=1;
        else{
        if (valores[i-1]<=valores[i])ans_atual+=1;
        else {
        ans=max(ans,ans_atual);
        ans_atual=1;}
    }
}
ans=max(ans,ans_atual);
    cout<<ans<<endl;
    return 0;
}