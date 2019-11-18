#include "turma.h"

Turma::Turma()
{

}

double Turma::getMaiorNota()
{

    Aluno *a = std::max_element(turma.begin(),turma.end(),compararPorMedia);
    return a->getMedia();

}

double Turma::getMenorNota()
{
    Aluno *a = std::min_element(turma.begin(),turma.end(),compararPorMedia);
    return a->getMedia();
}

double Turma::getMedia()
{
    double media = 0;
    for(auto e : turma){
        media+=e.getMedia();
    }
    return media/turma.size();
}

void Turma::inserirAluno(Aluno a)
{
    turma.push_back(a);
}

void Turma::ordenarPorNome()
{
    std::sort(turma.begin(),turma.end(),[](Aluno a, Aluno b){
        return a.getNome()<b.getNome();
    });
}

int Turma::size()
{
    return turma.size();
}

Aluno Turma::operator[](int indice)
{
    return turma[indice];
}

void Turma::salvarDados(QString file)
{
    QFile arquivo(file);

    arquivo.open(QIODevice::WriteOnly);

    for(auto a:turma){
        QString linha = a.getNome() + "," + a.getMatricula() + "," + QString::number(a.getMedia()) + "," + a.getCurso()+"\n";
        arquivo.write(linha.toLocal8Bit());
    }
    arquivo.close();

}

void Turma::carregarDados(QString file)
{
    QFile arquivo(file);
    arquivo.open(QIODevice::ReadOnly);

    QString linha;
    QStringList dados;
    while(!arquivo.atEnd()){
        Aluno temp;
        linha = arquivo.readLine();
        dados = linha.split(",");
        temp.setNome(dados[0]);
        temp.setMatricula(dados[1]);
        temp.setMedia(dados[2].toDouble());
        temp.setCurso(dados[3]);
        inserirAluno(temp);
    }
    arquivo.close();

}

bool compararPorMedia(Aluno a, Aluno b)
{
    return a.getMedia()<b.getMedia();
}
