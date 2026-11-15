#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int>>pares(n);
        for(int i =0;i<n;i++){
            cin>>pares[i].first>>pares[i].second;
        }
        sort(pares.begin(),pares.end(), [](auto a, auto b){
            return (a.first+a.second)<(b.first+b.second);
        });

        int l=0;
        int c =0;
        string saida= "";
        bool tem =true;
        for(int i =0; i<n;i++){
            if(i>0 and pares[i].first<l || pares[i].second<c){
                tem = false;
                break;
            }
            string u (pares[i].first-l, 'R');
            string r (pares[i].second-c, 'U');
            saida+= u+r;
            l = pares[i].first;
            c = pares[i].second;
        }
        if(tem){
            cout<<"YES"<<endl;
            cout<<saida<<endl;
        }
        else cout<<"NO"<<endl;
    }

    }