#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada;
    cin>>entrada;
    int maiusc=0;
    for(char a:entrada){
        if (a==toupper(a))maiusc++;
    }
    for (char & a:entrada){
    if (maiusc<=entrada.size()/2 ){
        a=tolower(a);
    }
    else a=toupper(a);}
    cout<<entrada<<endl;
}