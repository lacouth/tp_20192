#include <iostream>
#include "lista.h"
#include "tarefa.h"

using namespace std;

int main(){
    string op;
    Lista lista;
    Tarefa tarefa;
    do{
        tarefa.obterTarefa();
        lista.adicionarTarefa(tarefa);
        cout << "Deseja inserir outra tarefa: ";
        cin >> op;
        cin.ignore();
    }while(op!="n");

    lista.mostrarTarefas();
    cout <<"=================\n";
    lista.mostrarTarefasPorDescricao();

}