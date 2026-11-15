#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string fila;
    cin>>fila;
    string copia;
    while(t--){
        copia=fila;
        for(int i=n;i>0;i--){
            if (copia[i-1]=='B' && copia[i]=='G'){
                fila[i-1]='G';
                fila[i]='B';
            }
        }
    }
    cout<<fila<<endl;
}