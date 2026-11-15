#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int>fat(11);
    int n;
    cin>>n;
    fat[0]=1;
    for (int i=1;i<=10;i++){
        fat[i]=fat[i-1]*i;
    }
   int ans=0;
    for (int i=10;i>0;i--){ //vem de traz para frente tentando colocar valores grandes
        if(fat[i]<=n){
            int at= n/fat[i];
            n-=at*fat[i];
            ans+=at;
        }
    }
    cout<<ans<<endl;
    return 0;
}
