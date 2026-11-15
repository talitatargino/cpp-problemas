#include <bits/stdc++.h>
using namespace std;
int n,c,t;
vector<int>pipocas;
bool possivel(long long chute){
    int competidor=1;
    int resta=chute*t;
    for(int i=0;i<n;i++){
        if(resta>=pipocas[i]){
            resta-=pipocas[i];
        }
        else{
            resta=t*chute;
            competidor++;
            i--;
        }
        if(competidor>c)return 0;
    }
    return 1;
}
int main(){
    cin>>n>>c>>t;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        pipocas.push_back(x);
    }
    int l=0;
    int r=1e9+10;
    while(l<r){
        int m=(l+r)/2;
        if(!possivel(m))l=m+1;
        else r=m;
    }
    cout<<l<<endl;
}