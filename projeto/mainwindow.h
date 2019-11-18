#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QFileDialog>


#include "turma.h"
#include "aluno.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnCadastro_clicked();

    void on_btn_ordernarNome_clicked();

    void on_actionSalvar_triggered();

    void on_actionCarregar_triggered();

private:
    Ui::MainWindow *ui;
    Turma turma;
    void atualizarEstatisticas();
    void inserirNaTabela(Aluno a, int linha);
};

#endif // MAINWINDOW_H
