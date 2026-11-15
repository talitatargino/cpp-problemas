#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, P;
    cin >> A >> P;

    ll cntA[26] = {};
    ll cntP[26] = {};
    ll lenA = A.size();
    ll lenP = P.size();

    for (char c : A) {
        cntA[c - 'a']++;
    }

    for (char c : P) {
        cntP[c - 'a']++;
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int tipo;
        cin >> tipo;

        if (tipo == 1) {
            ll k;
            string s;
            cin >> k >> s;
            for (char c : s) {
                cntA[c - 'a'] += k;
            }
            lenA += k * s.size();

        }
        else if (tipo == 2) {
            ll k;
            string s;
            cin >> k >> s;
            for (char c : s) {
                cntP[c - 'a'] += k;
            }
            lenP += k * s.size();
        }
        else {
            bool respondeu = false;

        for (int i = 0; i < 26; i++) {
            if (cntA[i] > cntP[i]) {
            cout << "ADA\n";
            respondeu = true;
            break;}
            if (cntA[i] < cntP[i]) {
            cout << "PY\n";
            respondeu = true;
            break;
    }
}
        if (!respondeu) {
            if (lenA < lenP)
                cout << "ADA\n";
        else if (lenA > lenP)
            cout << "PY\n";
        else
            cout << "EMPATE\n";
}
        }
    }return 0;
}