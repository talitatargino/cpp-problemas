#include <bits/sstdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    vector<int>ouro(n);
    vector<bool>vis(n,false);
    bool primeiro = false;
    for(int i=0;i<n;i++){
        cin>>ouro[i];
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int>fila;
    
    for(int i=0;i<n;i++){
        if(!vis[i]){
            vis[i]=true;
            fila.push(i);
            ans+= ouro[v];
        }
        while(!fila.empty()){
            int f = fila.front();
            fila.pop();
            for(int v: vis[f]){
                if(!vis[v]){
                    vis[v]= true;
                    fila.push(v);
                }
            }
        }
    }
    cout<<ans<<endl;
}