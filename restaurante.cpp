#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
int main (){
    int n;
    cin>>n;
    vector<pair<int, int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),comp); //O sort tá organizando que quem termina primeiro vem primeiro.
    int ans=0;
    int fim=-1;
    for (int i=0;i<n;i++){
        if(v[i].first>fim){
            fim=v[i].second;
            ans++;
        }
    }  
    cout<<ans<<endl;
    return 0;
}