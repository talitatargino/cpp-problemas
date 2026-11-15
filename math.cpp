#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada;
    cin>>entrada;
    vector<char>valores;
    for(int i=0;i<entrada.size();i++){
        if (i%2==0 or i==0){
            valores.push_back(entrada[i]);
        }
    }
    sort(valores.begin(),valores.end());
    string saida;
    for(char v:valores){
        saida.push_back(v);
        saida.push_back('+');
    }
    saida.pop_back();
    cout<<saida<<endl;
}