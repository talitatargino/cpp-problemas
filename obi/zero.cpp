#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    stack<int>fila;
    int soma=0;
    while(n--){
        int v;cin>>v;

        if(v!=0){
            fila.push(v);
            soma+=v;
        }
        else{
            soma-=fila.top();
            fila.pop();
        }

    }
    cout<<soma<<endl;
    
}