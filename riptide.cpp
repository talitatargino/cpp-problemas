#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int resposta=0;
        while(a!=b and a!=c and c!=b){
            int mx=max({a,b,c});
            int mn=min({a,b,c});
            if (a==mx) a--;
            else if(b==mx)b--;
            else c--;
            if (a==mn) a++;
            else if(b==mn)b++;
            else c++;
            resposta++;
        }
        cout<<resposta<<endl;
    }
}