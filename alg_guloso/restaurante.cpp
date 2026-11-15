#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a, pair<int,int>b){
    return a.second<b.second;
}
int main(){
    int t;cin>>t;
    vector<pair<int,int>>pedidos(t);
    for(int i=0;i<t;i++){
        cin>>pedidos[i].first>>pedidos[i].second;
    }
    sort(pedidos.begin(),pedidos.end(),comp);
    int ans=1;
    int fim=pedidos[0].second;
    for(int i=1;i<t;i++){
        if(pedidos[i].first>fim){
            ans++;
            fim=pedidos[i].second;
        }
    }
    cout<<ans<<endl;
}