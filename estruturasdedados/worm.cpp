#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    vector<pair<int, int>> pilhas(t);
    pilhas[0].first =1;
    for (int i =1; i<t; i++){
        cin>>pilhas[i].second;
    }

     for (int i =1; i<t; i++){
        pilhas[i].second =pilhas[i-1].second+pilhas[i].first;
    }
    int n;
    cin>>n;
    for (int i =0;i<n;i++){
        int valor; cin>>valor;
        int in =0;
        int f =t-1;
        int meio;
        int ans;
        while(in<f){
            meio = (in+f)/2;
            if (valor>=pilhas[meio].first && valor<=pilhas[meio].second){
                ans = meio;
                f = meio-1;
            }
            else{

            }
        }
    }
}