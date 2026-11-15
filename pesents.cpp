#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>amgs(n);
    for (int i=0;i<n;i++){
        cin>>amgs[i];
    }
    int pos;
    for (int i=1;i<=n;i++){
        pos=find(amgs.begin(),amgs.end(),i)- amgs.begin();
        cout<<pos+1<<endl;
    }
}