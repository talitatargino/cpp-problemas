#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string atual;
    string anterior;
    int grupos=0;
    for (int i = 0; i < n; i++) {
        cin >> atual;

        if (atual != anterior) {
            grupos++;
        }

        anterior = atual;
    }

    cout << grupos << endl;
}