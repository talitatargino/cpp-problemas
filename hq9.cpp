#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;cin>>a;
    for (char x:a){
        if(x=='H' or x=='Q' or x=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}