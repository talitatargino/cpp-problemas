#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string saida;
    for (int i=1;i<=n;i++){
        if (i==1) saida+="I hate";
        else if(i%2==0){
            saida+=" that I love";
        }
        else saida+=" that I hate";
    }
    saida+=" it";
    cout<<saida<<endl;}