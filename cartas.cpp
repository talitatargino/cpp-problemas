#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string palavra;cin>>palavra;
    vector<int>valores;
    for(int i=0;i<n;i++){
        if(palavra[i]=='z'){
            valores.push_back(0);
        }
        else if(palavra[i]=='n'){
            valores.push_back(1);
        
        }
    }
    sort(valores.begin(),valores.end(),greater<int>());
    for(int x:valores){
        cout<<x<<" ";
    }
    return 0;
}