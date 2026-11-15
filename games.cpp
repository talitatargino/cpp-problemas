#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>>times(n);
    for(int i=0;i<n;i++){
        cin>>times[i].first>>times[i].second;
    }
    int ans=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(times[i].first==times[j].second)ans++;
        }
    }
    cout<<ans<<endl;
}