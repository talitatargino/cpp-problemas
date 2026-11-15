#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int t,tipo;
    cin>>t;
    int sa[26]={};
    int sb[26]={};
    long long tamA = a.size();
    long long tamB = b.size();
    for (char x : a) {
        sa[x - 'a']++;
    }
    for (char x : b) {
        sb[x - 'a']++;
    }

    while(t--){
        cin>>tipo;
        if(tipo==1){
            long long k;cin>>k;
            string s;cin>>s;
            for (char x:s){
                sa[x-'a']+=k;
            }
        tamA += k * s.size();
        }
        else if(tipo==2){
            long long k;cin>>k;
            string s;cin>>s;
            for (char x:s){
                sb[x-'a']+=k;
            }
        tamB += k * s.size();
        }
        else{
        bool empate=true;
        long long restanteA = tamA;
        long long restanteB = tamB;
        for (int i = 0; i < 26; i++) {
            if (sa[i] != sb[i]) {
                if (restanteA == 0)cout << "ADA\n";
                else if (restanteB == 0)cout << "PY\n";
                else if (sa[i] < sb[i])cout <<"PY\n";
                else cout << "ADA\n"; 
            empate=false;   
            break;
    }

    restanteA -= sa[i];
    restanteB -= sb[i];
}
if(empate)cout<<"EMPATE"<<endl;
        }

    }

}