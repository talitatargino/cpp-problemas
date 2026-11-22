#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<int>> g(n);
    vector<int> ouro(n);
    vector<bool> vis(n, false);
    long long ans = 0;

    for(int i = 0; i < n; i++){
        cin >> ouro[i];
    }
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        if(!vis[i]){
            vis[i] = true;
            queue<int> fila;
            fila.push(i);
            long long menor_custo_componente = ouro[i];

            while(!fila.empty()){
                int front = fila.front();
                fila.pop();
                
                for(int v: g[front]){
                    if(!vis[v]){
                        vis[v] = true;
                        fila.push(v);
                        menor_custo_componente = min(menor_custo_componente, (long long)ouro[v]);
                    }
                }
            }
            
            ans += menor_custo_componente;
        }
    }

    cout << ans << "\n";
    return 0;
}