#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tam=n;
    unordered_map<int, int>valores;
    while(tam--){
        int v;cin>>v;
        valores[v]+=1;
    }
    int max=0;
    for (auto v: valores){
        int x= v.first*v.second+ (n-v.second);
        if(x>max){
            max=x;
        }
    }
    cout<<max<<endl;
}