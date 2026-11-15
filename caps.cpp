#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool maiusculas = true;
    for (char c : s) {
        if (islower(c)) {
            maiusculas = false;
            break;
        }
    }

    bool primeiraMinuscula = true;
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            primeiraMinuscula = false;
            break;
        }
    }

    if(maiusculas || primeiraMinuscula) {
        for(char &c : s) {
            if(isupper(c))
                c=tolower(c);
            else
                c=toupper(c);
        }
    }
    cout << s;
}