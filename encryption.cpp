#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    cin.ignore();
    while(N--){
        string s;
        getline(cin,s);

        for(char &c: s){
            if(isalpha(c)){
                c+=3;}
            }
            reverse(s.begin(),s.end());
            int metade= s.size()/2;
            for(int i=metade; i<s.size();i++){
                s[i]-=1;
            }
            cout<<s<<"\n";
        }
        return 0;
    }

