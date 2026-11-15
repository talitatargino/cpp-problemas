#include <bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
#define f first
#define pb push_back
#define s second
int n,m;
int const MAX=1010;
char M[MAX][MAX];
bool vis[MAX][MAX];
int dist[MAX][MAX];
vector<pair<int,int>>mov={{0,1},{0,-1},{1,0},{-1,0}};
bool val(pair<int,int> u){
    return u.f>=0 and u.s>=0 and u.f<n and u.s<m and M[u.f][u.s]!='#' and !vis[u.f][u.s];
}
void bfs_ms(vector<pair<int,int>>ms){
    memset(vis, 0, sizeof vis);
    memset(dist,INF,sizeof dist);
    queue<pair<int,int>>q;
    for(auto s:ms) q.push(s),vis[s.f][s.s]=1,dist[s.f][s.s]=0;
    while(!q.empty()){
        pair<int,int>v=q.front();q.pop();
        for (auto u:mov){
            u.f+=v.f,u.s+=v.s;
            if(val(u)){
                q.push(u);vis[u.f][u.s]=1;
                dist[u.f][u.s]=dist[v.f][v.s]+1;
            }
        }
    }

}
int bfs(pair<int,int>s){
    memset(vis,0,sizeof vis);
    queue<pair<int,int>>q;
    q.push(u);vis[s.f][s.s]=1;dist[s.f][s.s]=0;
    while(!q.empty()){
        pair<int,int>v=q.front(); q.pop();

        for(auto u: mov){
            u.f+=v.f;u.s+=v.s;

            if (val(u) and dist[u.f][u.s]<dist[v.f][v.s]+1){
                q.push(u),vis[u.f][u.s]=1+vis[v.f][v.s];
            }
        }

    }
    return -1;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>m>>n;
        vector<pair<int,int>>ms;
        pair<int,int>s;
        for (int i=0;i<n;i++)for(int j=0;j<m;j++){
            cin>>M[i][j];
            if(M[i][j]=='*') ms.pb({i,j});
            if(M[i][j]=='@') s={i,j};
        }
    }

    return 0; 
}