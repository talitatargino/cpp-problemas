#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m!=n-1){
        cout<<"No"<<endl;
        return 0;
    }
    vector<int>grau(n);
    vector<vector<int>>g(n);
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        grau[a]++;
        grau[b]++;
    }
    int grau2 =0;
    int grau1 = 0;
    for(int v: grau){
        if(v==1)grau1++;
        else if(v==2)grau--;
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(grau1==2){
        cout<<"Yes"<<endl;
        return 0;
    }
}