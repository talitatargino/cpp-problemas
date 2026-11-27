#include <bits/stdc++.h>
using namespace std;
int g[105][105]; 
int main() {
    int k;
    cin >> k;
    int n = 0; 
    while (k > 0) {
        for (int j = 0; j < n; j++) {
            if (k >= j) {
                g[n][j] = 1;
                g[j][n] = 1;
                k -= j;
            } else {
                break; 
            }
        }
        n++; 
    }

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j];
        }
        cout << "\n";
    }
}