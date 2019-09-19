#include <iostream>
#include "forca.h"

using namespace std;



int main(){
    string palavra = obterPalavra("palavras.txt");
    string chutes = "";
    int tentativas=0;
    int erros=0;
    int acertos = 0;
    do{
        mostrarForca(chutes,palavra);
        obterChute(chutes);
        
        acertos = contarAcertos(chutes,palavra);
        erros = contarErros(chutes,palavra);
        cout << "Acertos: "<<acertos<<endl;
        cout << "Erros: "<<erros<<endl;
        tentativas++;
    }while(erros<3 && acertos<palavra.size());


    
    return 0;
}