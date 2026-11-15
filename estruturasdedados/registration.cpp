#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string, int>mp;
    for(int i =0; i<n;i++){
        string e;cin>>e;
        if(mp.count(e)){
            mp[e] +=1;
            string nova = e+ to_string(mp[e]);
            cout<<nova<<endl;
        }
        else{
            mp[e] = 0;
            cout<<"OK"<<endl;
        }
    }
}