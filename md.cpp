#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        int n=0;
        bool irredutivel= false;
        while( not irredutivel){
            if (x==1)
                break;
            if (x%6!=0 and x%3!=0){
                n= -1;
                irredutivel=true;}
            else if (x%6==0){
                x=x/6;
                n++;
            }
            else if (x%3==0){
                x=x*2;
                n++;
            }
        }
         cout<<n<<endl;
    }
    }
