#include <bits/stdc++.h>
using namespace std;
int N,C,T;
vector<int> pipocas(n);
bool possivel(long long chute){
    int comp=1;
    long long resta=T*chute;
    for (int i=0; i<N;i++){
        if(resta>=pipocas[i]){
            resta-=pipocas[i];}
        else{
            comp++;
            resta=T*chute;
            i--;}
        if (comp>C)return 0;
    }
    return 1;

}
int main(){
    cin>>N>>C>>T;
    for(int i=0;i<N;i++)cin>>pipocas[i];
    int l=0, r=1e9+1;
    while(l<r){
        int m=(l+r)/2;
        if (!possivel(m)) l=m+1;
        else r=m;
    }
    cout<<l<<endl;

    return 0;
}
//N=pacotes de pipocas; C=competidores; T=taxa(pipoca por unidade de tempo)