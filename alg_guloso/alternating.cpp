#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>valores(n);
        for(int i=0;i<n;i++){
            cin>>valores[i];
        }
        bool positivo=false;
        if(valores[0]>0){
            positivo=true;}
        long long ans=0;
        long long atual=valores[0];
        for(int i=1;i<n;i++){
            if (positivo and valores[i]>0 and valores[i]>atual){
                atual=valores[i];
                
            }
            else if(positivo and valores[i]<0){
                ans+=atual;
                atual=valores[i];
                positivo=false;
            }
            if (not positivo and valores[i]>atual and valores[i]<0){
                atual=valores[i];
            }
            else if(not positivo and valores[i]>0){
                ans+=atual;
                atual=valores[i];
                positivo=true;
            }

            }
        ans+=atual;
        cout<<ans<<endl;
        }
        
    
}