#include "disciplina.h"

void Disciplina::setNome(string n){
    if(n.size()>3){
        nome = n;
    }else
        nome = "Disciplina";

}
void Disciplina::setNota(int n){
    if(n>=0 and n<=100){
        notas.push_back(n);
    }else{
         notas.push_back(0);
    }
}

string Disciplina::getNome(){
    return nome;
}
int Disciplina::getNota(int i){
    return notas[i];
}
int Disciplina::getMedia(){
    int acc = 0;
    for(int i=0;i<notas.size();i++){
        acc+=notas[i];
    }
    return acc/notas.size();
}

int Disciplina::qntNotas(){
    return notas.size();
}