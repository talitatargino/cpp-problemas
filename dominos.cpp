#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    pair<int,int>indices;
    for (int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a;
            if(a==1){
                indices.first=i;
                indices.second=j;
            }
        }
    }
    int ans=0;
    cout<<abs(indices.first-2)+abs(indices.second-2)<<endl;
}