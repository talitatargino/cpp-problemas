#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int indice_menor = 0;
    int qnt_menor = g[0].size();
    for (int i =0;i<n;i++){
        if(g[i].size()<qnt_menor){
            qnt_menor = q[i].size();
            indice_menor = i;
        }
    }
    vector<int>ans(n, 1);
    for (int v: g[indice_menor]){
        ans[v]=0;
    }
    ans[indice_menor]=0;
    for (int i: ans){
        cout<<i<<" ";
    }
}