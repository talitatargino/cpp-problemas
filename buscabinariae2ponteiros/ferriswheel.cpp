#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<long long>pesos(n);
    for(int i = 0; i<n; i++){
        cin>>pesos[i];
    }
    int ans = 0;
    int p = n-1;
    int l = 0;
    sort(pesos.begin(),pesos.end());
    while(l<=p){
       if (pesos[p]+ pesos[l]<=x){
        ans ++;
        p--;
        l++;
       }
       else{
        ans++;
        p--;
       }
    }
    cout<<ans<<endl;
}