#include <bits/stdc++.h>
using namespace std;
int main(){
    string e;
    cin>>e;
    int i=0;
    string ans;
    while(i<e.size()){
    if(e[i]=='W' and e[i+1]=='U' and e[i+2]=='B'){
        i+=3;
        if (ans.size()>0)ans+=" ";
    }
    else{
        ans+=e[i];
        i++;
    }
}cout<<ans<<endl;
return 0;}