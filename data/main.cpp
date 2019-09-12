#include <iostream>
#include "data.h"

using namespace std;

int main(){

    Data data1;
    Data data2;

    data1.dia = 1;
    data1.mes = 1;
    data1.ano = 2012;

    data2.dia = 1;
    data2.mes = 1;
    data2.ano = 2013;

    int qnt_dias;

    qnt_dias = contarDias(data1,data2);

    cout << "Quantidade de dias: " <<qnt_dias<<endl;
    return 0;
}