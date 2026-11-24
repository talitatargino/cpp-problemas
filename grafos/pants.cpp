#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<String,vector<String>>vdd(n);
    for (int i=0;i<n;i++){
        string pais1, pais2, lixo;
        cin>>pais1>>lixo>>lixo>>lixo>>pais2;
        vdd[pais1].insert(pais2);
    }
    for(int i =0;i<m;i++){
        for (int i=0;i<n;i++){
        string pais1, pais2, lixo;
        cin>>pais1>>lixo>>lixo>>lixo>>pais2;
        if(g[pais1].contains(pais2)){
            cout<<"Fact"<<endl;
        }
        }
    }
}