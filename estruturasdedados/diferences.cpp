#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>mp;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            mp[x-i]++;
        }
        long long ans= 0;
        for(auto x : mp){
            long long k = x.second;
            ans += (k*(k-1))/2;
        }
        cout<<ans<<endl;
    }
}