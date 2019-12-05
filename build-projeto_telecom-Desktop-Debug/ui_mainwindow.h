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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionSalvar;
    QAction *actionCarregar;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tabela;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *input_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *input_matricula;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *input_media;
    QPushButton *pushButton;
    QPushButton *btn_ordenar;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *maiorNota;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QLabel *menorNota;
    QGroupBox *groupBox_3;
    QLabel *media;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(469, 577);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 461, 501));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabela = new QTableWidget(tab);
        if (tabela->columnCount() < 4)
            tabela->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tabela->setObjectName(QString::fromUtf8("tabela"));
        tabela->setGeometry(QRect(20, 170, 431, 221));
        tabela->horizontalHeader()->setStretchLastSection(true);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 0, 401, 164));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
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
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        input_nome = new QLineEdit(layoutWidget);
        input_nome->setObjectName(QString::fromUtf8("input_nome"));

        horizontalLayout->addWidget(input_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        input_matricula = new QLineEdit(layoutWidget);
        input_matricula->setObjectName(QString::fromUtf8("input_matricula"));

        horizontalLayout_2->addWidget(input_matricula);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        input_media = new QLineEdit(layoutWidget);
        input_media->setObjectName(QString::fromUtf8("input_media"));

        horizontalLayout_3->addWidget(input_media);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);

        verticalLayout_2->addWidget(pushButton);

        btn_ordenar = new QPushButton(tab);
        btn_ordenar->setObjectName(QString::fromUtf8("btn_ordenar"));
        btn_ordenar->setGeometry(QRect(20, 400, 151, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 391, 151));
        maiorNota = new QLabel(groupBox);
        maiorNota->setObjectName(QString::fromUtf8("maiorNota"));
        maiorNota->setGeometry(QRect(60, 40, 221, 91));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        maiorNota->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 120, 221, 91));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 160, 391, 151));
        menorNota = new QLabel(groupBox_2);
        menorNota->setObjectName(QString::fromUtf8("menorNota"));
        menorNota->setGeometry(QRect(50, 40, 221, 91));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 310, 391, 151));
        media = new QLabel(groupBox_3);
        media->setObjectName(QString::fromUtf8("media"));
        media->setGeometry(QRect(50, 40, 221, 91));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 469, 25));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionCarregar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
#if QT_CONFIG(shortcut)
        actionSalvar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCarregar->setText(QCoreApplication::translate("MainWindow", "Carregar", nullptr));
#if QT_CONFIG(shortcut)
        actionCarregar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Matr\303\255cula", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "M\303\251dia", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Situa\303\247\303\243o", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Matr\303\255cula:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "M\303\251dia", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        btn_ordenar->setText(QCoreApplication::translate("MainWindow", "Ordenar por nome", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Cadastro", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Maior Nota", nullptr));
        maiorNota->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Menor Nota", nullptr));
        menorNota->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "M\303\251dia", nullptr));
        media->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Dados", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
