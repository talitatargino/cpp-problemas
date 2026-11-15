#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    for (int tam = 2; tam <= n; tam++) {
        for (int l = 0; l + tam - 1 < n; l++) {
            int r = l + tam - 1;
            // Remove a[l] sozinho
            dp[l][r] = 1 + dp[l + 1][r];
            for (int k = l + 1; k <= r; k++) {
                if (gcd(a[l], a[k]) > 1) {
                    int antes = 0;
                    if (k > l + 1)
                        antes = dp[l + 1][k - 1];
                    dp[l][r] = min(
                        dp[l][r],
                        antes + dp[k][r]
                    );
                }
            }
        }
    }
    cout << dp[0][n - 1] << '\n';
}