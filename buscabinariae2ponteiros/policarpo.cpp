#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada;
    cin>>entrada;
    char a;
    stack<char>pilha;
    a = entrada[0];
    pilha.push(a);
    for ( int i =1; i<entrada.size(); i++){
        if(!pilha.empty() && entrada[i] == a && pilha.top()==a ||!pilha.empty() && entrada[i]== pilha.top()){
            pilha.pop();
        }
        else{
            a = entrada[i];
            pilha.push(a);
        }
    }
    string saida = "";
    while(!pilha.empty()){
        saida += pilha.top();
        pilha.pop();
    }
    reverse(saida.begin(), saida.end());
    cout<<saida<<endl;
}