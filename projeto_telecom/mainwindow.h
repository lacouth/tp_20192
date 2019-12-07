#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include "aluno.h"
#include "turma.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Turma turma;
    void atualizarEstatisticas();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_btn_ordenar_clicked();

    void on_actionSalvar_triggered();

    void on_actionCarregar_triggered();

    void on_input_media_returnPressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
