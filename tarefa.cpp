#include <bits/stdc++.h>
using namespace std;
int main(){
    string vogais="AEIOUaeiouYy";
    string entrada;
    cin>>entrada;
    string saida;
    for(char x:entrada){
        if(vogais.find(x)==string::npos){
            saida.push_back('.');
            x=tolower(x);
            saida.push_back(x);
        }
    }
    cout<<saida<<endl;
}