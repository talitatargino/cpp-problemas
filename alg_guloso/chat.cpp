#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<string>v;
    while(t--){
        string a;
        cin>>a;
        v.push_back(a);
    }
    unordered_set<string>s;
     for (int i = v.size() - 1; i >= 0; i--) {
        if (s.find(v[i]) == s.end()) {
            cout << v[i] << endl;
            s.insert(v[i]);
    }
}}