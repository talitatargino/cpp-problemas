#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int valor;
        cin>>valor;
        v.push_back(valor);
    }
    int ans= v[0], soma_ant=v[0];
    for (int i=1; i<n;i++){
        soma_ant=max(soma_ant+v[i], v[i]);
        ans=max(soma_ant,ans);
    }
cout <<ans<<endl;
return 0;
}