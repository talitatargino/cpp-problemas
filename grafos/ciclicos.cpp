#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int,vector<int>>g(n);
    vector<int>vis(n,false);
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans =0;
    queue <int>fila;
    for (int i =0;i<n;i++){
        if(!vis[i]){
            vis[i]=true;
            fila.push(i);
            an++;
            while(!fila.empty()){
                int f = fila.front();
                fila.pop();
                for (int v: g[f]){
                    if(!vis[v]){
                        vis[v]=true;
                        fila.push(v);
                    }
            }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}