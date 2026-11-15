#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int>a;
    for(int i =0;i<n;i++){
        int x;cin>>x;
        a.insert(x);
    }
    bool s = true;
    for (int i=0;i<m;i++){
        int b;cin>>b;
        auto it = a.find(b);
        if(it ==a.end()){
            s = false;
        }
        else{
            a.erase(it);
        }
    }
    if(s)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}