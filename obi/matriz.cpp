#include <bits/stdc++.h>
using namespace std;
int main(){
    int max;cin>>max;
    vector<int>valores(9);
    valores[0]= max;
    for(int i=1;i<=8;i++){
        cin>>valores[i];
        if(valores[i]>=max){
           max=valores[i];
        }
    }
    int i =0;
    for(int v:valores){
        if(v==max){
            cout<<-1<<" ";
        }
        else cout<<v<<" ";
        i++;
        if(i%3==0)cout<<endl;
    }
    
}