#include <iostream>
#include <vector>
#include "disciplina.h"

using namespace std;
 
class Aluno{
    private:
        string nome;
        string matricula;
        vector<Disciplina> disciplinas;
        
        
    public:

        Aluno(string n, float m);
        Aluno();
        void setNome(string n);
        string getNome();

        void setMatricula(string m);
        string getMatricula();

        // void setMedia(float m);
        // float getMedia();

        void obterDados();
        void mostrarDados();
};

void ordenar();