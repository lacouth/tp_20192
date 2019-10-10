#include <iostream>
#include "myvector.h"

using namespace std;

int main(){
    MyVector notas;
    MyVector novasNotas;
    MyVector resultado;

    notas.adicionar(70);
    notas.adicionar(55);
    notas.adicionar(44);

    novasNotas.adicionar(30);
    novasNotas.adicionar(20);
    novasNotas.adicionar(10);

    notas.show();
    notas = notas + 10;
    notas.show();

    resultado = notas + novasNotas;
    resultado.ordenar();
    resultado.show();
    cout << resultado[-1]<<endl;

    return 0;
}