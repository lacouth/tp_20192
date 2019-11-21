#ifndef ALUNO_H
#define ALUNO_H

#include <QString>

class Aluno
{
private:
    QString nome;
    QString matricula;
    double media;
    QString curso;
public:
    Aluno();
    QString getNome() const;
    void setNome(const QString &value);
    QString getMatricula() const;
    void setMatricula(const QString &value);
    double getMedia() const;
    void setMedia(double value);
    QString getCurso() const;
    void setCurso(const QString &value);

    QString definirStatus();
};

#endif // ALUNO_H
