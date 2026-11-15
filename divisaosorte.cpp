#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=false;
    for(int i=4;i<=n;i++)
    if(n%i==0){
        int a=i;
        int cont=0;
        while(a>0){
            if (a%10!=4 && a%10!=7){
                cont++;
                break;
            }
            a=a/10;
        }
        if(cont==0){
            ans=true;
            break;
        }
    }
    if (ans==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}