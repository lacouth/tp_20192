#ifndef TURMA_H
#define TURMA_H
#include "aluno.h"
#include <QVector>
#include <vector>
#include <algorithm>
#include <QFile>
#include <QDebug>
#include <QStringList>

class Turma
{
private:
    QVector<Aluno> turma;
public:
    void incluirAluno(Aluno a);
    double maiorNota();
    double menorNota();
    double mediaDaTurma();
    void ordenar();
    int size();

    Aluno operator[](int indice);

    void salvarDados(QString nomeDoArquivo);
    void carregarDados(QString nomeDoArquivo);

    Turma();
};

bool compararPorMedia(Aluno a, Aluno b);
bool compararPorNome(Aluno a, Aluno b);

#endif // TURMA_H
