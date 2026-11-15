#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    for( char&c:a){
        c=toupper(c);
    }
    for( char&c:b){
        c=toupper(c);
    }
    if(a==b)cout<<0<<endl;
    else if(a>b) cout<<1<<endl;
    else cout<<-1<<endl;
}