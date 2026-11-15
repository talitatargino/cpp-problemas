#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> v;

        for(char c : s){
            if(v.empty() || v.back() != c)
                v.push_back(c);
        }

        int ans = v.size();

        for(int i = 1; i < n-1; i++){
            string tem = s.substr(0,i) + s.substr(i+1);

            int bloco = 1;

            for(int j = 1; j < tem.size(); j++){
                if(tem[j] != tem[j-1])
                    bloco++;
            }

            ans = min(ans, bloco);
        }

        cout << ans << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        string s;

        cin >> n >> s;

        int grupos = 1;

        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])
                grupos++;
        }

        int ans = grupos;

        for(int i=1;i<n-1;i++){

            int atual = grupos;

            // remove o grupo do caractere s[i]
            if(s[i-1]!=s[i] && s[i]!=s[i+1])
                atual--;

            // junta os vizinhos
            if(s[i-1]!=s[i+1] && s[i-1]!=s[i] && s[i]!=s[i+1])
                atual++;

            // caso especial: vizinhos iguais
            if(s[i-1]==s[i+1] && s[i]!=s[i-1])
                atual-=2;

            ans=min(ans,atual);
        }

        cout << ans << '\n';
    }
}