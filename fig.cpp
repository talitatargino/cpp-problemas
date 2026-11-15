#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long mdc=a[0];
    for(int i=0;i<n;i++){
        mdc=gcd(mdc,a[i]);
    }
    int soma=0;
    for(int i=0;i<n;i++){
        soma+= a[i]/mdc;
        }
    cout<<soma<<endl;
    return 0;
}