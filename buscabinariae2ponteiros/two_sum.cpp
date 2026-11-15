#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;
    vector<pair<int, int>>valores(n);
    for (int i =0; i<n;i++){
        cin>>valores[i].first;
        valores[i].second = i+1;
    }
    sort(valores.begin(), valores.end());
    int a = 0;
    int b = n-1;
    int soma = 0;
    bool encontrei = false;
    while(a<b && not encontrei){
        soma = valores[a].first+ valores[b].first;
        if (soma<x){
            a++;
        }
        else if (soma>x){
            b--;
        }
        else{
            cout<<valores[a].second<<" "<<valores[b].second<<endl;
            encontrei = true;
        }
    }
    if (!encontrei){
        cout<< "IMPOSSIBLE"<<endl;
    }
}