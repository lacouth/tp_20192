#include "complexo.h"

Complexo::Complexo(int a, int b){
    real = a;
    imaginario = b;
}

void Complexo::show(){
    cout<<real<<" + "<<imaginario<<"i"<<endl;
}

Complexo Complexo::operator+(Complexo b){
    int r2;
    int i2;

    r2 = real + b.getReal();
    i2 = imaginario + b.getImaginario();
    
    return Complexo(r2,i2);
}