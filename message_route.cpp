#include <bits/stdc++.h>
using namespace std;
#define pb push_back
const int MAX=1e5+10;
vector<vector<int>>g(MAX);
vector<bool>vis(MAX);
vector<int>pai(MAX);
void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=1;
    pai[s]=s;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for (auto u: g[v]){
            if (!vis[u]){
                q.push(u);
                vis[u]=1;
                pai[u]=v;
                }
          }
    }
}
vector<int>path(int v){
    vector<int>ret;
    if (!vis[v])return ret;
    ret.pb(v);
    while(pai[v]!=v){
        v=pai[v];
        ret.pb(v);
    }
    reverse(ret.begin(),ret.end());
    return ret;

}
int main(){
    int n,m;cin>>n>>m;
    for (int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    bfs(0);
    vector<int>ans=path(n-1);
    if (ans.size()==0) cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<ans.size()<<endl;
        for(auto u:ans){
            cout<<u+1<<" ";
        }
        cout<<endl;
    }
    exit(0);
}
