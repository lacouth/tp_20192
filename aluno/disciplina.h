#ifndef DISCIPLINA_H 
#define DISCIPLINA_H
#include <iostream>
#include <vector>


using namespace std;

class Disciplina{
    private:

        string nome;
        vector<int> notas;
        
    public:
        void setNome(string n);
        void setNota(int n);

        string getNome();
        int getNota(8);
        int getMedia();
        int qntNotas();
};

#endif