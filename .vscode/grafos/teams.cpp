#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vis(n, -1);
    vector<vector<int>>g(n);
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int>fila;
    bool possivel = true;
    for (int i = 0; i < n; i++) {
        if (vis[i] != -1) continue;
        fila.push(i);
        vis[i] = 1;
        while (!fila.empty() && possivel) {
            int front = fila.front();
            fila.pop();
            for (auto u : g[front]) {
                if (vis[u] == vis[front]) {
                    possivel = false;
                    break;
                }
                if (vis[front] == 1 && vis[u] == -1) {
                    vis[u] = 2;
                    fila.push(u);
                } else if (vis[front] == 2 && vis[u] == -1) {
                    vis[u] = 1;
                    fila.push(u);
                }
            }
        }
    }
    if (!possivel) {
        cout << "IMPOSSÍVEL"<<endl;
        return 0;
    }
    string saida = "";
    for(int v: vis){
      saida+= to_string(v) + " ";  
    }
    saida.pop_back();
    cout<<saida<<endl;
    return 0;
}