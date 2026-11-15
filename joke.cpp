#include <bits/stdc++.h>
using namespace std;

int main() {

    string hosp, anf, pilha;

    getline(cin, hosp);
    getline(cin, anf);
    getline(cin, pilha);

    int letras[26] = {};

    for (char c : hosp) {
        letras[c - 'A']++;
    }

    for (char c : anf) {
        letras[c - 'A']++;
    }

    for (char c : pilha) {
        letras[c - 'A']--;
    }

    for (int i = 0; i < 26; i++) {
        if (letras[i] != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}