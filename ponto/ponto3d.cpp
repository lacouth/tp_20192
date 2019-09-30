#include "ponto3d.h"

Ponto3d::Ponto3d(int a, int b, int c){
    x = a;
    y = b;
    z = c;
}

void Ponto3d::show(){
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}