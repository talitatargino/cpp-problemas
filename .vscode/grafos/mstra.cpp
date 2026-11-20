#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    vector<int>pai(n,-1);
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
    while(!fila.empty()){
        int topo = fila.front();
        fila.pop();
        for (int v: g[topo]){
            if(pai[v]==-1){
                pai[v]= topo;
                fila.push(v);
            }
        }
    }
    if(pai[n-1]==-1){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    vector<int>caminho;
    int atual = n-1;
    while(atual!=0){
        caminho.push_back(atual);
        atual = pai[atual];
    }
    caminho.push_back(0);
    reverse(caminho.begin(), caminho.end());
    cout << caminho.size() << "\n";
   for (int i = 0; i < caminho.size(); i++) {
    cout << caminho[i] + 1;
    if (i + 1 < caminho.size()) cout << " ";
        }
    cout << "\n";
    
}