/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tabela;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputNome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inputMat;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *inputMedia;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *inputCurso;
    QPushButton *btnCadastro;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(612, 510);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 591, 431));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabela = new QTableWidget(tab);
        if (tabela->columnCount() < 5)
            tabela->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tabela->setObjectName(QString::fromUtf8("tabela"));
        tabela->setGeometry(QRect(10, 200, 561, 151));
        tabela->horizontalHeader()->setStretchLastSection(true);
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 561, 176));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        inputNome = new QLineEdit(widget);
        inputNome->setObjectName(QString::fromUtf8("inputNome"));

        horizontalLayout->addWidget(inputNome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        inputMat = new QLineEdit(widget);
        inputMat->setObjectName(QString::fromUtf8("inputMat"));

        horizontalLayout_2->addWidget(inputMat);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        inputMedia = new QLineEdit(widget);
        inputMedia->setObjectName(QString::fromUtf8("inputMedia"));

        horizontalLayout_3->addWidget(inputMedia);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        inputCurso = new QComboBox(widget);
        inputCurso->addItem(QString());
        inputCurso->addItem(QString());
        inputCurso->addItem(QString());
        inputCurso->addItem(QString());
        inputCurso->setObjectName(QString::fromUtf8("inputCurso"));

        horizontalLayout_4->addWidget(inputCurso);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        btnCadastro = new QPushButton(widget);
        btnCadastro->setObjectName(QString::fromUtf8("btnCadastro"));

        verticalLayout_2->addWidget(btnCadastro);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Matr\303\255cula", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Curso", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "M\303\251dia", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabela->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Matr\303\255cula:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "M\303\251dia:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Curso:", nullptr));
        inputCurso->setItemText(0, QString());
        inputCurso->setItemText(1, QCoreApplication::translate("MainWindow", "Engenharia El\303\251trica", nullptr));
        inputCurso->setItemText(2, QCoreApplication::translate("MainWindow", "Administra\303\247\303\243o", nullptr));
        inputCurso->setItemText(3, QCoreApplication::translate("MainWindow", "Sistema para Internet", nullptr));

        btnCadastro->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Cadastro", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Dados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
