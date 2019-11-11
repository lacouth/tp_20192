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

void MainWindow::on_btnCadastro_clicked()
{
    Aluno aluno;

    aluno.setNome(ui->inputNome->text());

    aluno.setMatricula(ui->inputMat->text());

    aluno.setMedia(ui->inputMedia->text().toDouble());

    aluno.setCurso(ui->inputCurso->currentText());

    ui->inputMat->clear();
    ui->inputMedia->clear();
    ui->inputNome->clear();


   int quantidade_linhas = ui->tabela->rowCount();

   ui->tabela->insertRow(quantidade_linhas);
   ui->tabela->setItem(quantidade_linhas,0, new QTableWidgetItem(aluno.getNome()));
   ui->tabela->setItem(quantidade_linhas,1, new QTableWidgetItem(aluno.getMatricula()));
   ui->tabela->setItem(quantidade_linhas,2, new QTableWidgetItem(aluno.getCurso()));
   ui->tabela->setItem(quantidade_linhas,3, new QTableWidgetItem(QString::number(aluno.getMedia())));
   ui->tabela->setItem(quantidade_linhas,4, new QTableWidgetItem(aluno.definirStatus()));


}
















