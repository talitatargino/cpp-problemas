#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string x;cin>>x;
        int l =0;
        int r = n-1;
        int ans =0;
        while(l<=r){
            if(x[l]==x[r]){
                break;
            }
            ans +=2;
            l++;
            r--;
        }
        cout<<n-ans<<endl;
    }
}