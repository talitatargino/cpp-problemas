#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int inst=1;
    while(cin>>n){
        long long fat=1;
        for(int i=1;i<=n;i++){
            fat*=i;
            while(fat%10==0){
                fat/=10;
            }
            fat%=1000000000;
        }
        cout<<"Instancia "<<inst<<endl;
        cout<<fat%10<<endl;
        inst++;
    }

    return 0;
}