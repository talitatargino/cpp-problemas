#include <bits/stdc++.h>
using namespace std;
#define pb push_back 
#define f first
#define s second
int n,m;
const int MAX=110;
char M[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int,int>>mov={{-1,0},{1,0},{0,-1},{0,1}};
bool val(pair<int,int>u){
    return u.f>=0 and u.s>=0 and u.f<n and u.s<m and M[u.f][u.s]=='H' and !vis[u.f][u.s];
}
pair<int,int>bfs(pair<int,int>l){
    queue<pair<int,int>>q;
    q.push(l), vis[l.f][l.s]=1;
    pair<int,int>v;
    while(!q.empty()){
        v=q.front();
        q.pop();
        for(auto u:mov){
            u.f+=v.f;
            u.s+=v.s;
        if(val(u)){
            q.push(u);
            vis[u.f][u.s]=1;
        }
        }
    }
    return v;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        cin>>M[i][j];
    }
    pair<int,int>l;
    for(int i=0;i<n; i++)for(int j=0;j<m;j++){
        if (M[i][j]=='o') l={i,j};
    }
    pair<int,int>ans=bfs(l);
    cout<<ans.f+1<<" "<<ans.s+1<<endl;
    return 0;
}