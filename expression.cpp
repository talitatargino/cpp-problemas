#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int ans;
    cin>>a>>b>>c;
    ans=max({a+b+c, a*b*c, (a+b)*c, a+b*c, a*b+c, a*(b+c)});
    cout<<ans<<endl;
    return 0;
}