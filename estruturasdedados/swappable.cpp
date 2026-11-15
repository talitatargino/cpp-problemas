#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    map<int,int>mp;
    for (int i=0;i<n;i++){
        int x;cin>>x;
       mp[x]++;
    }
    long long ans = (n *(n-1))/2;
     for (auto it : mp) {
        long long count = it.second;
        if(count>1){
            long long p =(count*(count-1)/2);
            ans-= p;
        }
    }
    cout<<ans<<endl;
    return 0;
    
}