#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int j=2;
    for(int i=0;i<n;i++){
        if(i==0 or i%2==0){
            string a(m,'#');
            cout<<a<<endl;}
        else{
            if (j%2==0){
                string b(m-1,'.');
                b+='#';
                j+=1;
                cout<<b<<endl;
                }
            else{
                string b(m-1,'.');
                b[0]='#';
                b.push_back('.')
                j+=1;
                cout<<b<<endl;
            }
        
    }
}}