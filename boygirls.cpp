#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada;
    cin>>entrada;
    string letras;
    for(char c:entrada){
        if (letras.find(c)==string::npos){
            letras.push_back(c);
        }
    }
    if(letras.size()%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

}