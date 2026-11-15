#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>g(n);
    vector<pair<int,int>>trocas;
    int cont=0;
    for (int i=0;i<n;i++){
        cin>>g[i];
    }
    for(int j=0;j<n;j++){
        int menor=j;
        for (int b=j;b<n;b++){
            if(g[b]<g[menor]){
                menor=b;
            }
        }
        if(j!=menor){
        swap(g[j], g[menor]);
        trocas.push_back({j,menor});
        cont++;}
    }
    cout<<cont<<endl;
    for(auto p : trocas){
        cout<< p.first<< " "<<p.second<<endl;
    }
    return 0;
}