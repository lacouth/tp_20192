#include "turma.h"

void Turma::incluirAluno(Aluno a)
{
    turma.push_back(a);
}

double Turma::maiorNota()
{
    Aluno *a;
    a = std::max_element(turma.begin(),turma.end(),compararPorMedia);
    return a->getMedia();
}

double Turma::menorNota()
{
    Aluno *a;
    a = std::min_element(turma.begin(),turma.end(),compararPorMedia);
    return a->getMedia();
}

double Turma::mediaDaTurma()
{
    double media = 0;

    for(Aluno a : turma){
        media+=a.getMedia();
    }
    return media/turma.size();

}

void Turma::ordenar()
{
 std::sort(turma.begin(),turma.end(),compararPorNome);

}

int Turma::size()
{
    return turma.size();
}

Aluno Turma::operator[](int indice)
{
    return turma[indice];
}

void Turma::salvarDados(QString nomeDoArquivo)
{
    QFile arquivo(nomeDoArquivo);

    arquivo.open(QIODevice::WriteOnly);

    QString linha;
    for (auto a : turma){
        linha = a.getNome() + "," + a.getMatricula() + "," + QString::number(a.getMedia()) + "\n";
        arquivo.write(linha.toLocal8Bit());
    }

    arquivo.close();
}

Turma::Turma()
{

}

bool compararPorMedia(Aluno a, Aluno b)
{
    return a.getMedia()<b.getMedia();
}

bool compararPorNome(Aluno a, Aluno b)
{
    return a.getNome() <  b.getNome();
}
