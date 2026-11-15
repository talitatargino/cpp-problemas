#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans;
    int x=((a/7)*b);
    int y=(a*(b/7));
    ans=max(x,y);
    cout<<ans<<endl;
}