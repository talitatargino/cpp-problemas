#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada ;
    cin>>entrada;
    int k;
    cin>>k;
    int ultimo_ponto;
    int inicio, fim;
    inicio = fim = 0;
    int ans= 0;
    int contak =0;
    int soma=0;
    while (fim< entrada.size()){
       if (entrada[fim]== '.'){
        soma+=1;
        contak++;
       }
       else{
        soma++;
       }
        while(contak>k){
            if (entrada[inicio] == '.'){
                contak--;
            }
            inicio++;
            soma--;
       }
       ans = max(ans, soma);
       fim ++;
    }
    cout<<ans<<endl;
}