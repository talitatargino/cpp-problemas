#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> valores(n);
        for (int i = 0; i < n; i++) {
            cin >> valores[i];
        }
        sort(valores.begin(), valores.end(), greater<int>());

        int l = 0;
        deque<int> estante;
        while (l < n) {
            estante.push_front(valores[l]);
            l += 1;
            if (l < n) {
                estante.push_back(valores[l]);
                l += 1;
            }
        }

        int ans = n;
        for (int i = 1; i < n - 1; i++) {
            if ((estante[i - 1] == estante[i] && estante[i + 1] >= estante[i]) ||
                (estante[i - 1] >= estante[i] && estante[i + 1] == estante[i])) {
                ans--;
            }
        }

        cout << ans << "\n";
        for (int i = 0; i < n; i++) {
           cout << estante[i];
            if (i + 1 == n) cout << "";   
            else cout << " ";  

        }
        cout << "\n";
    }

    return 0;
}