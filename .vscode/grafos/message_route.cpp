#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    vector<bool>vis(n,false);
    for(int i =0;i<m;i++){
        int a,b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int>fila;
    fila.push(0);
    vis[0]=true;
    bool possivel=false;
    int ans=0;
    while(!fila.empty()){
        int topo = fila.front();
        fila.pop();
        for (int v: g[topo]){

            if(!vis[v]){
                vis[v]= true;
                fila.push(v);
            }
            if(v==n--){
                possivel=true;
                break;
            }
            else{
                ans++;
            }

        }
    }
    cout<<ans<<endl;
}