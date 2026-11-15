#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double y=0.1;
    double x=0.2;
    cout<< setprecision(17)<<y+x<<endl;
    cout<<"O ideal seria que fosse impresso apenas o 0.3, mas a imprecisao impossibilitou que esse valor fosse representado precisamente"<<endl;
    double a=1;
    double b=3;
    cout<<a/b<<endl;
    cout<<"Nesse outro caso o esperado seria a dizima 0.33333, mas no digito final apareceu o valor 1"<<endl;
    return 0;
}