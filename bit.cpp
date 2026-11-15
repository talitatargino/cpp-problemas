#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int ans=0;
    string perg;
    while(n--){
        cin>>perg;
        if (perg.find("+")!= string::npos){
            ans++;
        }
        else ans--;
    }
    cout<<ans<<endl;
}