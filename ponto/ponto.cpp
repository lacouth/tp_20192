#include "ponto.h"

string Ponto::quadrante(){
    if(x>0 and y>0){
        return "primeiro";
    }else if(x<0 and y>0){
        return "segundo";
    }else if (x<0 and y<0){
        return "terceiro";
    }else if(x>0 and y<0){
        return "quarto";
    }else{
        return "origem";
    }
}

Ponto::Ponto(int a, int b){
    x = a;
    y = b;
}

Ponto::Ponto(){
    x = 0;
    y = 0;
}

void Ponto::show(){
    cout << x<<endl;
    cout << y<<endl;
}