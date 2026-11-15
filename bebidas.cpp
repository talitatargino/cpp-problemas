#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int i=n;
    double coq;
    double arm=0;
    while(n--){
        cin>>coq;
        arm+=coq;
    }
    cout<<arm/i<<endl;
}