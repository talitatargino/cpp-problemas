#include <bits/stdc++.h>
using namespace std;
const <int> MAX=1e5+10;
vector<int>vis(MAX,0),pai(MAX,-1);
vector<vector<int>>g(MAX);
void bfs(int s){
    queue<int>q; //coloca o vértice s na fila.
    q.push(s);
    pai[s]=s,vis[s]=1;  //define que o pai de s é ele mesmo e visita ele.
    while(!q.empty()){
        int v=q.front;q.pop();
        for(auto u:g[v]){
            if(!vis[u]){
                q.push(u),vis[u]=1,pai[u]=v;
            }
        }
    }
}





int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0,i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    return 0;
}