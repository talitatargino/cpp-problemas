#include <iostream>
using namespace std;

int main() {
    signed char y=-128;
    cout<<(int)y<<endl;
    y=y-1;
    cout<<(int)y<<endl;

    unsigned char x=255;
    cout<<(int)x<<endl;
    x=x+1;
    cout<<(int)x<<endl;
    cout<<"EXPLICAÇÃO: o usigned char armazena valores entre 0 e 255 se eu exceder o máximo em 1 ele retorna para o 0."<<endl;
    return 0;
}
