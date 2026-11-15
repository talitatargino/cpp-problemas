#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=n-1;i>0;i--){
        if (a[i-1]==a[i]){
            a.erase(i,1);
        }
    }
    cout<<n-a.size()<<endl;
}