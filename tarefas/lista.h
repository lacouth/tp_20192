#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "tarefa.h"

class Lista{
    private:
        vector<Tarefa> lista;
    public:
        void adicionarTarefa(Tarefa t);
        void removerTarefa(string d);
        void mudarStatus(string d);
        int size();


        void mostrarTarefas();
        void mostrarTarefasPorDescricao();
        
};

bool compararDescricao(Tarefa a, Tarefa b);

#endif