#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int valor;
    vector<pair<int,int>>v(t);
    for(int i=0;i<t;i++){
        cin>>valor;
        v[i]={valor,i};
    }
    int troca=0;
    vector<pair<int,int>>ordenado=v;
    sort(ordenado.begin(),ordenado.end());
    for (int i=0;i<t;i++){
        if (v[i].second==ordenado[i].second)continue;
        int j=ordenado[i].second;
        swap(v[i],v[j]);
        troca++;
        cout<<i<<" "<<j<<endl;
        }
        if(troca==0)cout<<0<<endl;
    
    return 0;
}