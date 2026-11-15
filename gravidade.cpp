#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>valores(t);
    for (int i=0;i<t;i++){
        cin>>valores[i];
    }
    sort(valores.begin(),valores.end());
    for(int v:valores)cout<<v<<endl;
}