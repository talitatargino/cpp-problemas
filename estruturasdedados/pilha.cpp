#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin, s);
        stack<char> pilha;
        bool verifica = true;
        for(int i = 0; i< s.size(); i++){
           if(s[i] == '(' || s[i] =='['){
            pilha.push(s[i]);
           }
           else{
            if(!pilha.empty() && pilha.top()== '(' && s[i]== ')' ||!pilha.empty() && pilha.top()== '[' && s[i]== ']'){
                pilha.pop();
            }
            else{
                verifica = false;
                break;
            }
        }
    }
       if(verifica && pilha.empty())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}