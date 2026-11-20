#include <bits/stdc++.h>
using namespace std;
int main(){
    n,m;
    cin>>n>>m;
    vector<bool>vis(n+1);
    vector<vector<int>>g(n+1);
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a--]=b--;
        g[b--]=a--;
    }
    queue<int>fila;
    fila.push(g[0]);
    vis[0]=true;
    while(!fila.empty()){
        int front = fila.front();
        for(auto u: g[front]){
            if(!vis[u]){
                vis[u]= true;
                fila.push(u);
            }
        }
        fila.pop();
    }
    int time1 = n;
    int time2 = 0;
    for(bool n: vis){
        if(n) time2++;
    }
    cout<<time1-time2<<endl;
    cout<<time2<<endl;

}