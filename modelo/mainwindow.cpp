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

void MainWindow::on_btn_clicked()
{
    QString dados;
    dados = ui->input_nome->text();
    ui->saida_nome->setText(dados);
    ui->input_nome->clear();
}

void MainWindow::on_input_nome_returnPressed()
{
    QString dados;
    dados = ui->input_nome->text();
    ui->saida_nome->setText(dados);
    ui->input_nome->clear();
}
