#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int p;cin>>p;
    vector<bool>ve(n+1,false);
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        ve[x]=true;
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int y;#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int p;cin>>p;
    vector<bool>ve(n+1,false);
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        ve[x]=true;
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int y;
        cin>>y;
        ve[y]=true;
    }
    bool resposta=true;
    for(int i=1;i<=n;i++){
        if(ve[i]==false){resposta=false;
        break;}
    }
    if(resposta==true)cout<<"I become the guy";
    else cout<<"Oh, my keyboard!";
}
        cin>>y;
        ve[y]=true;
    }
    bool resposta=true;
    for(int i=1;i<=n;i++){
        if(ve[i]==false){resposta=false;
        break;}
    }
    if(resposta==true)cout<<"I become the guy";
    else cout<<"Oh, my keyboard!";
}