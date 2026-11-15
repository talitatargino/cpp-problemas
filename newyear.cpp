#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=abs(a-b)+abs(c-b);
    d= min(d, abs(a-c)+abs(b-c));
    d = min(d, abs(b-a)+abs(c-a));
    cout<<d<<endl;
}