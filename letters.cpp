#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada1;
    getline(cin,entrada1);
    set<char>se;
    for(int i=0;i<entrada1.size();i++){
        if(isalpha(entrada1[i])){
            se.insert(entrada1[i]);
        }
    }
    cout<<se.size();}