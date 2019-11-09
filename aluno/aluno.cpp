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

// void Aluno::setMedia(float m){
//     if( m >= 0 and m < 100){
//         media = m;
//     }else{
//         media = 0;
//     }
// }
// float Aluno::getMedia(){
//     return media;
// }

void Aluno::obterDados(){
    string temp;
    float tempF;
    cout << "Informe o nome: ";
    cin >> temp;
    setNome(temp);
    string op2;
    string op; 
    do{
        Disciplina disciplina;
        string d;
        
        cout << "Informe o nome da disciplina: ";
        cin>>d;
        disciplina.setNome(d);
        do{
            int nota;
            
            cout << "Informe uma nota: ";
            cin >> nota;
            disciplina.setNota(nota);
            cout << "Deseja inserir outra nota? ";
            cin >> op;
        }while(op=="sim");
        disciplinas.push_back(disciplina);
        cin.ignore();
        cout << "Deseja inserir outra disciplina? ";
        cin >> op2;
    }while(op2=="sim");
}
void Aluno::mostrarDados(){
    cout << "O nome do aluno é: "<<getNome()<<endl;
    for(int i=0;i<disciplinas.size();i++){
        cout << disciplinas[i].getNome()<<endl;
        for(int j=0;j<disciplinas[i].qntNotas();j++){
            cout << disciplinas[i].getNota(j)<<" ";
        }
        cout << "Média: "<<disciplinas[i].getMedia()<<endl;
    }
}

Aluno::Aluno(string n, float m){
    setNome(n);
    // setMedia(m);
}

Aluno::Aluno(){}