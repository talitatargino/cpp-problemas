#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>d(n);
    long double p=1.0;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
        p *= (long double)min(d[i], k - 1) / d[i];
    }
    cout<<fixed<<setprecision(10)<<1.0-p<<endl;
}