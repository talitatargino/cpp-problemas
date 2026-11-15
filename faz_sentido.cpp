#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        unordered_map<string,double>valor;
        valor["JD"]=1.0;
        for(int i=0;i<a;i++){
            string moeda;
            double  taxa;
            cin>>moeda>>taxa;
            valor[moeda]=taxa;
        }
        double total=0.0;
        for(int j=0;j<b;j++){
            double qunt;
            string moeda;
            cin>>qunt>>moeda;
            total+=qunt*valor[moeda];
        }
        cout<<fixed<<setprecision(6)<<total<<"\n";
    }
    return 0;
}