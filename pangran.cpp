#include <bits/stdc++.h>
using namespace std;
int main(){
    int sa[26]={};
    int n;cin>>n;
    string a;
    cin>>a;
    for (char &x : a) {
        x = tolower(x);
    }
    if (n<26){
        cout<<"NO"<<endl;
        return 0;}
    bool respondeu=false;
    for(char x:a){
        sa[x-'a']+=1;
        }
    for (int i=0;i<26;i++){
        if(sa[i]==0){
            cout<<"NO"<<endl;
            respondeu=true;
            break;
        }}
    if (respondeu==false)cout<<"YES"<<endl;}
