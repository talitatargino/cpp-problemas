#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<int, vector<int>>andares;
    for(int i =0;i<n;i++){
        int a,b;
        cin>>a>>b;
        andares[a].push_back(b);
        andares[b].push_back(a);
        }
        queue<int>fila;
        set<int>visitados;
        visitados.insert(1);
        fila.push(1);
        int maximo = 1;
        while(!fila.empty()){
            int front = fila.front();
            fila.pop();
            for (int v: andares[front]){
                if(!visitados.count(v)){
                    visitados.insert(v);
                    fila.push(v);
                    maximo = max(maximo, v);
                }
            }
        }
        cout<<maximo<<endl;
        
}