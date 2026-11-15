#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int cont = 0;

    for (char x : n) {
        if (x == '4' || x == '7')
            cont++;
    }

    string qtd = to_string(cont);

    for (char x : qtd) {
        if (x != '4' && x != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
