#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<long long>valores(n);
    for(int i =0;i<n;i++){
        cin>>valores[i];
    }
    int inicio= 0;
    long long soma = 0;
    int ans =0;
    for (int fim =0 ;fim<n; fim++){
            soma+= valores[fim];
            while (soma>t && inicio<=fim){
                soma-= valores[inicio];
                inicio ++;
            }
            ans = max (ans, fim-inicio+1);
        }
        cout<<ans<<endl;
    
}