#include <bits/stdc++.h>
using namespace std;
int main(){
   int l,c;
   cin>>l>>c;
   vector<vector<int>>matriz(l, vector<int>(c));
   int resultado=0;
   for (int i=0; i<l;i++){
      int soma=0;
      for (int j=0;j<c;j++){
         cin>>matriz[i][j];
         soma+=matriz[i][j];
      }
      resultado=max(resultado,soma);
   }

   for (int j=0; j<c;j++){
      int soma_colunas=0;
         for (int i=0;i<l;i++){
            soma_colunas+=matriz[i][j];
         }
      resultado=max(resultado,soma_colunas);
   }
   cout<<resultado<<endl;
   return 0;
}