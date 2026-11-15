#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>>heap;
    while(n--){
        int x;cin>>x;
        heap.push(x);
        if(heap.size()>k){
            heap.pop();
        }
        if(heap.size()==k){
            cout<< heap.top()<<endl;
        }
    }
}