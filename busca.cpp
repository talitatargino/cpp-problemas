#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    string a;
    string resposta="EASY";
    for(int i=0;i<t;i++){
        cin>>a;
        if (a=="1"){
            resposta="HARD";
        }
    }
    cout<<resposta<<endl;
}