#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>valor(n);
    for(int i=0;i<n;i++){
        cin>>valor[i];
    }
    sort(valor.begin(), valor.end());
    int q;cin>>q;
    for (int i =0;i<q; i++){
        int m;cin>>m;
        int l =0;
        int r= n-1;
        int meio;
        int ans =0;
        while (l<=r){
            meio = (l+r)/2;
            if (valor[meio]>m){
                r = meio-1;
            }
            else{
                l = meio +1;
                ans = meio+1;
            }
        }
        cout<<ans<<endl;
    }
}