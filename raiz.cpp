#include <bits/stdc++.h>  
using namespace std;
int main(){
    cout<< fixed <<setprecision(10);
    double N; cin>>N;
    double l=0, r=1e9, eps=1e-6;
    while(r-l>eps){
        double m=(l+r)/2;
        if(m*m>N)
            r=m;
        else l=m;
    }
    cout<<(l+r)/2<<endl;
    return 0;
}