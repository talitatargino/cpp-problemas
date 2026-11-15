#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int valor;cin>>valor;
        int i=1;
        int ans=0;
        vector<int>valores;
        while (valor>10){
            int x=(valor%10)*i;
            if (x>0){
            valores.push_back(x);}
            i*=10;
            valor/=10;
            if(x>0)ans++;
        }
        valores.push_back(valor*i);
        cout<<ans+1<<endl;
        for (int a : valores) {
             cout << a << " ";
}cout << endl;
    }
}