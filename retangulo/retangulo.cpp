#include "retangulo.h"

Retangulo::Retangulo(int a, int l){
    if(a>0)
        altura = a;
    else
        altura = 1;

    if(l>0)
        largura = l;
    else
        largura = 1;
}

Retangulo::Retangulo(){}

void Retangulo::show(){
    for(int i=0;i<altura;i++){
        for(int j=0;j<largura;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

Retangulo Retangulo::operator+(int valor){
    int novaAltura, novaLargura;
    novaAltura = altura + valor;
    novaLargura = largura + valor;
    return Retangulo(novaAltura, novaLargura);
}

Retangulo Retangulo::operator+(Retangulo b){
    int novaAltura, novaLargura;
    novaAltura = altura + b.getAltura();
    novaLargura = largura + b.getLargura();
    return Retangulo(novaAltura, novaLargura);

}

int Retangulo::getAltura(){
    return altura;
}

int Retangulo::getLargura(){
    return largura;
}