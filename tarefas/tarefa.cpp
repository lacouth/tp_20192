#include "tarefa.h"

bool Tarefa::setDescricao(string d){
    if(d.size()>3){
        descricao = d;
        return true;
    }else{
        return false;
    }
}

bool Tarefa::setPrioridade(string p){
    transform(p.begin(), p.end(), p.begin(), ::tolower);

    if(p==ALTA || p==MEDIA || p==BAIXA){
        prioridade = p;
        return true;
    }else{
        return false;
    }

}

void Tarefa::setStatus(bool b){
    status = b;
}

string Tarefa::getDescricao(){
    return descricao;
}

string Tarefa::getPrioridade(){
    return prioridade;
}

string Tarefa::getStatus(){
    return status ? FINALIZADO : INCOMPLETO;    
} // Finalizado ou Incompleto

void Tarefa::obterTarefa(){
    string temp;

    do{
        cout << "Informe a descrição: ";
        getline(cin, temp);
    }while(!setDescricao(temp) && cout<<"Descrição Inválida\n");

    do{
        cout << "Informe a prioridade:";
        cin >> temp;
    }while(!setPrioridade(temp) && cout << "Prioridade inválida\n");

    setStatus(0);
}
void Tarefa::mostrarTarefa(){
    cout<<setw(20)<<getDescricao();
    cout<<setw(20)<<getPrioridade();
    cout<<setw(20)<<getStatus()<<endl;
}