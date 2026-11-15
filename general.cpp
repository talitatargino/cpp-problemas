#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int maior = max_element(v.begin(), v.end())-v.begin();
    int menor = min_element(v.rbegin(), v.rend())-v.rbegin();
    int ans = maior + menor;

    if (maior + menor >= n)
        ans--;
    cout << ans << endl;
    return 0;
}