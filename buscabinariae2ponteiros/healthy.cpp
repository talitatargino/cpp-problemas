#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,m;
    cin>>n>>m;
    vector<int > max(m,0);
    vector<vector<int>> matriz(n, vector<int>(m, 0));
    for (int i = 0; i<n;i++){
        for (int j = 0; j<m; j ++){
            cin>>matriz[i][j];
            if(matriz[i][j]>max[j]){
                max[j]= matriz[i][j];
            }
        }
    }
    int ans =0;
    for (int i =0;i<m;i++){
        ans+= max[i];
    }
    cout<<ans<<endl;
}