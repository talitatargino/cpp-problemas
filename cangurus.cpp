#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>tam(n);
    for (int i=0; i<n;i++){
        cin>>tam[i];
    }
    sort(tam.begin(),tam.end());
    int l=0,r=n/2;
    int tira=0;
    return 0;
    for( ;l<n/2 and r<n; ){
        if (tam[l]*2<=tam[r]){
            l++;
            r++;
            tira++;
        }
        else{r++;}
    }
    cout<<n-tira<<endl;
    return 0;
}
