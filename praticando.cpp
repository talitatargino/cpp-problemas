#include <bits/stdc++.h>
using namespace  std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=0,r=(n+1)/2,cont=0;
    while(l<(n+1)/2&&r<n){
        if (v[r]>=2*v[l]){
            r++;
            l++;
            cont++;
        }
        else{
            r++;
        }
    }
    cout<<n-cont<<endl;
   return 0;
}