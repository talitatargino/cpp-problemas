#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    long long soma =0;
    long long impar = 1e9+10;
    while(t--){
        long long n;cin>>n;
        soma+=n;
        if (n%2!=0){
            impar= min(n,impar);
        }
    }
    if(soma%2==0){
        cout<<soma<<endl;
    }
    else cout<<soma-impar<<endl;
    
}