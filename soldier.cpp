#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int pagar=0;
    for(int i=1; i<=w;i++){ pagar+=i*k;}
    int emp=pagar-n;
    if(emp>=0)cout<<emp<<endl;
    else cout<<0<<endl;
    }