#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int tam;cin>>tam;
        string s;cin>>s;
        stack<char> pilha;
        int ans = 0;
        for (char n : s){
            if (n == '(') pilha.push(n);
            else{
                if (!pilha.empty() && pilha.top() == '(' && n == ')'){
                    pilha.pop();
                    ans++;
                }
            }
        }
        cout<<(tam/2)-ans<<endl;
    }
}