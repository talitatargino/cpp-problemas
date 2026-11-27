#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int ans = 0;
    for (int i = 0; i <= n - 3; i++) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
            ans++;
        }
    }
    while(q--){
        int a;
        char b;
        cin>>a>>b;
        a--;
        if(b!= s[a]){
            s[a]=b;
            if(a)
        }
    }
}