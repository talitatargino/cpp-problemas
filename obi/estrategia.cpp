#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>valores{1,5,10,25,50,100};
    int valor;cin>>valor;
    int i =5;
    int ans=0;
    while(valor>0){
        if(valor< valores[i])i--;
        else{
            int j= (valor/valores[i]);
            valor = valor-(j*valores[i]);
            ans+=j;
        }
    }
    cout<<ans<<endl;
}