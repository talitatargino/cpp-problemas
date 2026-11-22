#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>grid(n);
    for(int i =0;i<n;i++){
        cin>>grid[i];
    }
    int comodos = 0;
    const int dr[4]={-1,1,0,0};
    const int dc[4]={0,0,-1,1};
    for (int i =0;i<n;i++){
        for (int j =0;j<m;j++){
            if(grid[i][j]=='.'){
                comodos++;
                grid[i][j]='#';
                queue <pair<int,int>>fila;
                fila.push({i,j});
                while(!fila.empty()){
                    auto [cr, cc] = fila.front();
                    fila.pop();
                    for (int d =0;d<4;d++){
                        int nr = cr +dr[d];
                        int nc = cc +dc[d];
                        if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='.'){
                        grid[nr][nc]='#';
                        fila.push({nr,nc});
                    }
                
                }
            }
        }
        }
    }
    cout<<comodos<<endl;
}