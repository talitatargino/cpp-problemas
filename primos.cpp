#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n; //Para input
    bool prime=true; //inicialmente todos são primos
    for(int i=0; i<n; i++){
        long long x;
        cin>>x;
        if(x<2){ //se for menor que 2 não é primo
            prime=false;
        for (long long j=2; j*j<=x;j++){ // só entra nesse for valores a partir de 4 (ou seja 2 e 3 continuam primos)
            if(x%j==0){//
                prime=false;
                break;
            }
            
        }    
    }
        if (prime) cout<<"Prime"<<endl;
        else cout<<"Not prime"<<endl;
}
    return 0;
}