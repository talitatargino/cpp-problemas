#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>dolares={1,5,10,20,100};
    int v;cin>>v;
    int i=4;
    int ans=0;
    while(v>0){
        if(v>=dolares[i]){
            v-=dolares[i];
            ans++;
        }
        else i--;
    }
    cout<<ans<<endl;
}