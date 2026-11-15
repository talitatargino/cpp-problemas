#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>poli={{"Tetrahedron",4},{"Cube",6},{"Octahedron",8}, {"Dodecahedron", 12}, {"Icosahedron", 20} };
    int n;cin>>n;
    int ans=0;
    while(n--){
        string x;
        cin>>x;
        ans+=poli[x];
    }
    cout<<ans;
    return 0;
}