#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string>reg;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        int t=count(reg.begin(),reg.end(), x);
        if(t==0){
            reg.push_back(x);
            cout<<"OK"<<endl;
        }
        else{
            cout<<x<<t<<endl;
            reg.push_back(x);
        }
    }
}