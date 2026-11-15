#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string a;cin>>a;
        set<char>s;
        for(char l: a){
            s.insert(l);
        }
        int ans = s.size()*2+(n-s.size());
        cout<<ans<<endl;
    }
}