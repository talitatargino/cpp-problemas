#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long ans=0;
    long long par=(n+1)/2;
    if(k<=par){
        ans=(2*(k-1))+1;
    }
    else{
        ans=(k-par)*2;
    }
    cout<<ans<<endl;
}