#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>pai(n,-1);
    vector<vector<int>>g(n);
    for(int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int>fila;
    fila.push(0);
    pai[0]=0;
    while(!fila.empty){
        int i = fila.front();
        fila.pop();
        for(int v: g[i]){
            if(pai[v]==-1){
                fila.push();
                pai[v]= i;
                }
            }
    }
    if(pai[n-1]==-1){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    vector<int>saida;
    int atual = n;
    while(atual>0){
        saida.push_back(atual);
        atual = pai[atual];
    }
    saida.push_back(0);
    
}