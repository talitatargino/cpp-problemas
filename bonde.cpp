#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int pas=0;
    int viagem=0;
    while(n--){
        cin>>a>>b;
        viagem+=(b-a);
        pas=max(pas,viagem );
    }
    cout<<pas<<endl;
}