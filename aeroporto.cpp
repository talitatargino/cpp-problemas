#include <bits/stdc++.h>
using namespace std;
int main(){
    int w=0;
    while(true){
    int x,y;
    cin>>x>>y;
    w++;
    if(x==0&&y==0)break;
    vector<vector<int>>v(x);
    for (int i = 0; i < y; i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout<<"Teste "<<w<<endl;
    vector<int>tam(x);
    int maior=0;
    for(int i=0;i<x;i++){
        tam[i]=v[i].size();
        if (tam[i]>maior){
            maior=tam[i];
        }
        }
    for(int j=0;j<x;j++){
        if(tam[j]==maior)cout<<j+1 <<" ";
    }
    cout<<endl;
    }
    return 0;
}