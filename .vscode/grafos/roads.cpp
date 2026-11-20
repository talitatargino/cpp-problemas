#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    vector<bool>vis(n,false);
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int>lideres;
    for(int i = 0;i<n;i++){
        if (!vis[i]){
            lideres.push_back(i);
        }
        queue<int>fila;
        fila.push(i);
        vis[i]=true;
        while(!fila.empty()){
            int front = fila.front();
            fila.pop();
            for (int v: g[front]){
                if(!vis[v]){
                    vis[v]=true;
                    fila.push(v);
                }
            }
        }
    }
    int k =lideres.size()-1;
    cout<<k<<endl;
    for(int i = 0;i<k;i++){
        cout << lideres[i]+1 << " " << lideres[i + 1] + 1 << endl;
    }
}