#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>postos(n);
        for (int i=0;i<n;i++){
            cin>>postos[i];
        }
        int ans = 2*(x - postos[n-1]);
        ans = max(ans, postos[0]);
        for (int i =1;i<n;i++){
            ans = max(ans,postos[i]-postos[i-1] );
        }
        cout<<ans<<endl;
    }
}