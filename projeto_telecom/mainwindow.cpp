#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Aluno aluno;
    int qnt_linhas;

    QString nome = ui->input_nome->text();
    QString matricula = ui->input_matricula->text();
    QString media = ui->input_media->text();
    ui->input_nome->clear();

    aluno.setNome(nome);
    aluno.setMatricula(matricula);
    aluno.setMedia(media.toDouble());

    qnt_linhas = ui->tabela->rowCount();
    ui->tabela->insertRow(qnt_linhas);

    ui->tabela->setItem(qnt_linhas,0,new QTableWidgetItem(aluno.getNome()));
    ui->tabela->setItem(qnt_linhas,1,new QTableWidgetItem(aluno.getMatricula()));
    ui->tabela->setItem(qnt_linhas,2,new QTableWidgetItem(QString::number(aluno.getMedia())));
    ui->tabela->setItem(qnt_linhas,3,new QTableWidgetItem(aluno.definirStatus()));
    qDebug()<<nome<<matricula<<media;
}
