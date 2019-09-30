#include "ponto.h"

Ponto::Ponto(int a, int b){
    setX(a);
    setY(b);
}

Ponto::Ponto(){

}

void Ponto::setX(int a){
    if(a>-200 and a<200){
        x = a;
    }else{
        x = 0;
    }

}

int Ponto::getX(){
    return x;
}