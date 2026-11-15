#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>valores(n);
    for (int i = 0; i<n; i++){
        cin>>valores[i];
    }
    sort(valores.begin(), valores.end());
    for (int i = 0; i<q; i++){
        int v;
        cin>>v;
        int l =0;
        int r = n-1;
        int meio;
        int ans = n;
        while(l<=r){
            meio = (l+r)/2;
            if (valores[meio]>=v){
                r = meio-1;
                ans = meio;
            }
            else{
                l = meio+1;
            }
        }
        cout<< n-ans<<endl;
    }
}