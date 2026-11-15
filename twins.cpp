#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>m(n);
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    int soma_total=accumulate(m.begin(),m.end(),0);
    sort(m.rbegin(),m.rend());
    int ans=0;
    int gem=0;
    for(int a:m){
        gem+=a;
        ans++;
        if (gem>((soma_total)/2))break;
    }
    cout<<ans<<endl;
}