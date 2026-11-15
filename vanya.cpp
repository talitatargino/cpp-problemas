#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int larg=0;
    vector<int>amigos(n);
    for(int i=0;i<n;i++){
        cin>>amigos[i];
        if (amigos[i]>h)larg+=2;
        else larg++;
    }
    cout<<larg<<endl;
}