#include <bits/stdc++.h>
using namespace std;
long long n,t;
vector<long long>tempo;
bool verifica(long long valor){
    long long total =0;
    for( long long v: tempo){
        total += valor/v;
        if (total>=t){
        return true;}
    }
    
    return false;
}
int main(){
    cin>>n>>t;
    tempo.resize(n);
    for (int i =0; i<n; i++){
        cin>> tempo[i];
    }
    long long i =1;
    long long f = 1e18;
    long long meio;
    long long ans= 0;
    while(i<=f){
        meio = (f+i)/2;
        if (verifica(meio)){
            f = meio-1;
            ans = meio;
        }
        else{
            i = meio+ 1;
        }
    }
    cout<<ans<<endl;
}