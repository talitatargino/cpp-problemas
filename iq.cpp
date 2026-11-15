#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int imp=0,par=0;
    int ip=0,ii=0;
    for(int i=0;i<t;i++){
        int a;cin>>a;
        if ( a%2!=0){
            par++;
            ip=i;

        }
        else{
            imp++;
            ii=i;
        }
        if (ip>0 and ii>0)break;
    }
    if (par>imp)cout<<ii+1<<endl;
    else cout<<ip+1<<endl;
    return 0;
}