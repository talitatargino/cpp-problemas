#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--){
        string a,b,c;
        cin>>a>>b>>c;
        bool ok =true;
        for (int i=0;i<a.size();i++){
            if (b[i]!=c[i] && a[i]!=c[i]){
                ok=false;
                break;
            }
        }
        if (ok==false){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}