#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int t;cin>>t;
    vector<int>a(n);
    int r=0,l=0,livros=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int intervalo=a[0];
    while(r<n){
        if(intervalo>t){
            intervalo-=a[l];
            l++;
        }
        else{
            livros=max(r-l+1,livros);
            r++;
            if(r<n){
                intervalo+=a[r];
            }
        }
    }
    cout<<livros<<endl;
    return 0;

}