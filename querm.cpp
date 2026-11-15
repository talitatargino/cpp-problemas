#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int teste=1;
    while(true){
        cin>>n;
        vector<int>v(n);
        int resposta=-1;
        if (n==0) return 0;
        for(int i=0;i<n;i++){
            cin>> v[i];
            if ((i+1)==v[i]){
            resposta=v[i];
        }
    }
    cout<<"Teste "<<teste<<endl;
    cout<<resposta<<endl;
    teste++;
}
}