#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    vector<int>grau(n);
    vector<bool>vis(n);
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
        grau[a]++;
        grau[b]++;
    
    }
    //Veifica se quantidade de aresta é o ideal
    if(m!=n-1){
        cout<<"No"<<endl;
        return 0;
    }
    //Verifica se tem dois vértices de grau 1 e o resto de grau 2
    int g1=0;
    int g2=0;
    for(int x: grau){
        if(x==1)g1++;
        else if(x==2)g2++;
        else {
            cout<<"No"<<endl;
            return 0;
        }
    }
    //Verifica se é conexo
    queue<int>fila;
    vis[0]=true;
    fila.push(0);
    int visitados = 1;
    while(!fila.empty()){
        int atual = fila.front();
        fila.pop();
        for(int v: g[atual]){
            if(!vis[v]){
                vis[v]= true;
                fila.push(v);
                visitados++;
            }
        }
    
    }
    if(visitados==n){
        cout<<"Yes"<<endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;

}