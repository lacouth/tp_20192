#include "data.h"

int contarDias(Data d1, Data d2){
    int contador = 0;
    while(!datasIguais(d1,d2)){
        d1.dia++;
        contador++;
        if(d1.dia > diasDoMes(d1)){
            d1.dia = 1;
            d1.mes++;
            if(d1.mes > 12){
                d1.mes = 1;
                d1.ano++;
            }
        }
        
    }
    return contador;
}

bool datasIguais(Data d1, Data d2){
    return d1.dia==d2.dia && d1.mes==d2.mes && d1.ano==d2.ano;
}

int diasDoMes(Data d1){
    int mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
    if (( d1.ano % 4 == 0 && d1.ano % 100 != 0 ) || d1.ano % 400 == 0 )
        mes[1]=29;
    return mes[d1.mes-1];
}