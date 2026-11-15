#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin>>n>>d;
    int ans=0;
    vector<int>forca(n);
    for(int i=0;i<n; i++){
        cin>>forca[i];
    }

    sort(forca.begin(),forca.end());
    int l=0;
    int r=n-1;
    int atual =0;
    while(l<=r){
        int qnt= (d)/forca[r]+1;
        int ad = qnt-1;
        if(l+ad<=r){
        l+= ad;
        r--;
        ans++;
        }
        else break;
        }
    cout<<ans<<endl;
}