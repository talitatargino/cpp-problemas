#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<int> ans(n + 1);
    set<int> distinct_elements;
    for (int i = n; i >= 1; i--) {
        distinct_elements.insert(a[i]);
        ans[i] = distinct_elements.size(); 
    }
    for (int i = 0; i < m; i++) {
        int l;
        cin >> l;
        cout << ans[l] << "\n";
    }
}