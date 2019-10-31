#include "lista.h"

void Lista::adicionarTarefa(Tarefa t){
    lista.push_back(t);
}

void Lista::removerTarefa(string d){
    for(int i=0;i<lista.size();i++){
        if(lista[i].getDescricao()==d){
            lista.erase(lista.begin()+i);
            break;
        }else{
            cout << "Tarefa inexistente";
        }
    }
}

void Lista::mudarStatus(string d){
    for(int i=0;i<lista.size();i++){
        if(lista[i].getDescricao()==d){
            if(lista[i].getStatus()==FINALIZADO){
                lista[i].setStatus(false);
            }else{
                lista[i].setStatus(true);
            }
        }
    }
}

void Lista::mostrarTarefas(){
    for(auto elemento:lista){
        elemento.mostrarTarefa();
    }
}

void Lista::mostrarTarefasPorDescricao(){
    sort(lista.begin(),lista.end(),compararDescricao);
    
    for(auto elemento: lista){
        elemento.mostrarTarefa();
    }
}

bool compararDescricao(Tarefa a, Tarefa b){
    return a.getDescricao() < b.getDescricao();
}
