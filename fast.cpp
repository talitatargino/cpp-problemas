#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cout<<x<<"   ";
    }

    return 0;
}

//COM FAST I/O
#include <bits/stdc++.h>
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        cout<<x<<" ";
    }
    return 0;
}