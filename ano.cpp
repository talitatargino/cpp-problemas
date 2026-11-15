#include <bits/stdc++.h>
using namespace std;
int main(){
    int ano;cin>>ano;
    string a;
    while(true){
        ano++;
        a=to_string(ano);
        int diferentes=0;
        for(char x:a){
            if (count(a.begin(),a.end(),x)==1) diferentes++;
        }
        if (diferentes==a.size())break;
    }
    cout<<ano<<endl;
}