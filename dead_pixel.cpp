#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long a,b,x,y;
        cin>>a>>b>>x>>y;
        long long ans=x*b;
        ans= max(ans,b*(a-x-1));
        ans= max(ans,a*y);
        ans=max(ans,a*(b-y-1));
        cout<<ans<<endl;
    }
    return 0;
}