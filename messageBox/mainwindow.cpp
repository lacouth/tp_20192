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
    if(aluno.setNome(label)==false){

        QMessageBox::warning(this, "Teste", "Valor inválido?");
       }
    qDebug() << (resposta==QMessageBox::Yes);
}
