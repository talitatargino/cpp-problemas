#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int Q;cin >> Q;
    long long sa[26] = {};
    long long sb[26] = {};
    for (char c : a)
        sa[c - 'a']++;
    for (char c : b)
        sb[c - 'a']++;
    long long empates = 0;
    while (Q--) {
        int tipo;
        cin >> tipo;
        if (tipo == 1) {
            long long k;
            string s;
            cin >> k >> s;
            for (char c : s)
                sa[c - 'a'] += k;
        }
        else if (tipo == 2) {
            long long k;
            string s;
            cin >> k >> s;
            for (char c : s)
                sb[c - 'a'] += k;
        }
        else {
            int ia = 0;
            int ib = 0;
            long long remA = sa[0];
            long long remB = sb[0];

            bool respondeu = false;

            while (ia < 26 and ib < 26) {
                while (ia < 26 and remA == 0) {
                    ia++;
                    if (ia < 26)
                        remA = sa[ia];
                }

                while (ib < 26 and remB == 0) {
                    ib++;
                    if (ib < 26)
                        remB = sb[ib];
                }
                if (ia == 26 || ib == 26)
                    break;

                if (ia < ib) {
                    cout << "ADA\n";
                    respondeu = true;
                    break;
                }

                if (ia > ib) {
                    cout << "PY\n";
                    respondeu = true;
                    break;
                }
                long long x = min(remA, remB);

                remA -= x;
                remB -= x;
            }

            if (!respondeu) {
                if (ia == 26 && ib == 26) {
                    empates++;

                    if (empates % 2 == 1)
                        cout << "EMPATE\n";
                    else
                        cout << "ADA\n";
                }
                else if (ia == 26) {
                    cout << "ADA\n";
                }
                else {
                    cout << "PY\n";
                }
            }
        }
    }

    return 0;
}
