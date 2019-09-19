#include "aluno.h"

void Aluno::setNome(string n){
    
    if(n.size() >= 3 ){
        nome = n;
    }else
    {
        nome = "Fulano";
    }
}

string Aluno::getNome(){
    return nome;
}

void Aluno::setMatricula(string m){
    if(m.size()==11){
        matricula = m;
    }else{
        matricula = "000000000000";
    }
}


string Aluno::getMatricula(){
    return matricula;
}

void Aluno::setMedia(float m){
    if( m >= 0 and m < 100){
        media = m;
    }else{
        media = 0;
    }
}
float Aluno::getMedia(){
    return media;
}

void Aluno::obterDados(){
    string temp;
    float tempF;
    cout << "Informe o nome: ";
    cin >> temp;
    
    cout << "Informe a média: ";
    cin >> tempF;

    setMedia(tempF);
    setNome(temp);

}
void Aluno::mostrarDados(){
    cout << "O nome do aluno é: "<<getNome()<<" tem média: "<< getMedia()<<endl; 

}

Aluno::Aluno(string n, float m){
    setNome(n);
    setMedia(m);
}