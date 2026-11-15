#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a;
    vector<int>va(a);
    for (int i=0;i<a;i++){
        cin>>va[i];
    }
    cin>>b;
    vector<int>vb(b);
    for (int i=0;i<b;i++){
        cin>>vb[i];
    }
    unordered_set<int>sa(va.begin(),va.end());
    unordered_set<int>sb(vb.begin(),vb.end());
    int valor=-1;
    while (true){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
            valor=va[i]+vb[j];
            if(!sa.count(valor) && !sb.count(valor)){
                cout << va[i] << " " << vb[j] << "\n";
                return 0;
            }
        }
        }
    }
    return 0;
}