#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    string entrada;cin>>entrada;
    int anton=0;
    for(char a: entrada){
        if (a=='A')anton++;
    }
    if (anton>t/2)cout<<"Anton"<<endl;
    else if(anton*2==t)cout<<"Friendship"<<endl;
    else cout<<"Danik"<<endl;
}