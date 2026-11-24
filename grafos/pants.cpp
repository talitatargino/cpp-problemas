#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<string,vector<string>>vdd;
    for (int i=0;i<n;i++){
        string pais1, pais2, lixo;
        cin>>pais1>>lixo>>lixo>>lixo>>pais2;
        vdd[pais1].push_back(pais2);
    }
    for(int i =0;i<m;i++){
        for (int i=0;i<n;i++){
        string pais3, pais4, lixo;
        cin>>pais3>>lixo>>lixo>>lixo>>pais4;
        auto chave = vdd[pais3];
        bool fact = false;
        for (string pais: chave){
            if(pais4==pais){
                fact=true;
                break;
            }
        }
        if(fact)cout<<"Fact"<<endl;
        else{
            bool reverse= false;
            auto chave = vdd[pais4];
            for (string pais: chave){
                if(pais3==pais){
                    reverse=true;
                    break;
            }
        }
        if(reverse){
            cout<<"Alternative Fact"<<endl;
        }
        else cout<<"Pants on Fire"<<endl;
        }
        }
    }
}