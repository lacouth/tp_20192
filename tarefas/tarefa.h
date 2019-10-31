#ifndef TAREFA_H
#define TAREFA_H

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

const string ALTA = "alta";
const string BAIXA = "baixa";
const string MEDIA = "média";

const string FINALIZADO = "Finalizado";
const string INCOMPLETO = "Incompleto";

class Tarefa{
    private:
        string prioridade;
        string descricao;
        bool status;
    public:
        bool setDescricao(string d);
        bool setPrioridade(string p);
        void setStatus(bool b);

        string getDescricao();
        string getPrioridade();
        string getStatus(); // Finalizado ou Incompleto

        void obterTarefa();
        void mostrarTarefa();
};

#endif