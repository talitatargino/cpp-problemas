#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    vector<int>v(n+1);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    for (int i=0;i<n;i++){
        if (v[i]>=v[k-1] and v[i]>=1) ans++;
    }
    cout<<ans<<endl;
}