#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;cin>>k;
    vector<int>meses(12);
    for(int i=0;i<12;i++){
        cin>>meses[i];
    }
    sort(meses.rbegin(),meses.rend());
    if (sum(meses)<k){
        cout<<-1<<endl;
    }
    else{
        int som=0;
        int i=0;
        while (som<k){
            som+=meses[i];
            i++;
        }    }
    return 0;
}
