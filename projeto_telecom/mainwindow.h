#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
