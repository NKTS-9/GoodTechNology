/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Summ;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *Ext;
    QPushButton *Div;
    QPushButton *Mult;
    QPushButton *One;
    QPushButton *Two;
    QPushButton *Three;
    QPushButton *Four;
    QPushButton *Five;
    QPushButton *Six;
    QPushButton *Seven;
    QPushButton *Eight;
    QPushButton *Nine;
    QPushButton *ZERO;
    QPushButton *Sqrt;
    QPushButton *SqrtN;
    QPushButton *Power;
    QPushButton *Factorial;
    QPushButton *logn;
    QPushButton *Sin;
    QPushButton *dB;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Summ = new QPushButton(centralWidget);
        Summ->setObjectName(QString::fromUtf8("Summ"));
        Summ->setGeometry(QRect(10, 60, 41, 21));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 113, 22));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 20, 113, 22));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 20, 113, 22));
        Ext = new QPushButton(centralWidget);
        Ext->setObjectName(QString::fromUtf8("Ext"));
        Ext->setGeometry(QRect(70, 60, 41, 21));
        Div = new QPushButton(centralWidget);
        Div->setObjectName(QString::fromUtf8("Div"));
        Div->setGeometry(QRect(130, 60, 41, 21));
        Mult = new QPushButton(centralWidget);
        Mult->setObjectName(QString::fromUtf8("Mult"));
        Mult->setGeometry(QRect(190, 60, 41, 21));
        One = new QPushButton(centralWidget);
        One->setObjectName(QString::fromUtf8("One"));
        One->setGeometry(QRect(10, 100, 41, 21));
        Two = new QPushButton(centralWidget);
        Two->setObjectName(QString::fromUtf8("Two"));
        Two->setGeometry(QRect(70, 100, 41, 21));
        Three = new QPushButton(centralWidget);
        Three->setObjectName(QString::fromUtf8("Three"));
        Three->setGeometry(QRect(130, 100, 41, 22));
        Four = new QPushButton(centralWidget);
        Four->setObjectName(QString::fromUtf8("Four"));
        Four->setGeometry(QRect(10, 130, 41, 22));
        Five = new QPushButton(centralWidget);
        Five->setObjectName(QString::fromUtf8("Five"));
        Five->setGeometry(QRect(70, 130, 41, 21));
        Six = new QPushButton(centralWidget);
        Six->setObjectName(QString::fromUtf8("Six"));
        Six->setGeometry(QRect(130, 130, 41, 21));
        Seven = new QPushButton(centralWidget);
        Seven->setObjectName(QString::fromUtf8("Seven"));
        Seven->setGeometry(QRect(10, 160, 41, 21));
        Eight = new QPushButton(centralWidget);
        Eight->setObjectName(QString::fromUtf8("Eight"));
        Eight->setGeometry(QRect(70, 160, 41, 21));
        Nine = new QPushButton(centralWidget);
        Nine->setObjectName(QString::fromUtf8("Nine"));
        Nine->setGeometry(QRect(130, 160, 41, 21));
        ZERO = new QPushButton(centralWidget);
        ZERO->setObjectName(QString::fromUtf8("ZERO"));
        ZERO->setGeometry(QRect(70, 190, 41, 21));
        Sqrt = new QPushButton(centralWidget);
        Sqrt->setObjectName(QString::fromUtf8("Sqrt"));
        Sqrt->setGeometry(QRect(240, 100, 41, 21));
        SqrtN = new QPushButton(centralWidget);
        SqrtN->setObjectName(QString::fromUtf8("SqrtN"));
        SqrtN->setGeometry(QRect(290, 100, 51, 21));
        Power = new QPushButton(centralWidget);
        Power->setObjectName(QString::fromUtf8("Power"));
        Power->setGeometry(QRect(240, 130, 41, 21));
        Factorial = new QPushButton(centralWidget);
        Factorial->setObjectName(QString::fromUtf8("Factorial"));
        Factorial->setGeometry(QRect(290, 130, 51, 21));
        logn = new QPushButton(centralWidget);
        logn->setObjectName(QString::fromUtf8("logn"));
        logn->setGeometry(QRect(240, 160, 41, 21));
        Sin = new QPushButton(centralWidget);
        Sin->setObjectName(QString::fromUtf8("Sin"));
        Sin->setGeometry(QRect(270, 190, 41, 21));
        dB = new QPushButton(centralWidget);
        dB->setObjectName(QString::fromUtf8("dB"));
        dB->setGeometry(QRect(290, 160, 51, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Summ->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        Ext->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        Div->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        Mult->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        One->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        Two->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        Three->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        Four->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        Five->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        Six->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        Seven->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        Eight->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        Nine->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        ZERO->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        Sqrt->setText(QApplication::translate("MainWindow", "sqrt", 0, QApplication::UnicodeUTF8));
        SqrtN->setText(QApplication::translate("MainWindow", "$sqrt", 0, QApplication::UnicodeUTF8));
        Power->setText(QApplication::translate("MainWindow", "^", 0, QApplication::UnicodeUTF8));
        Factorial->setText(QApplication::translate("MainWindow", "!", 0, QApplication::UnicodeUTF8));
        logn->setText(QApplication::translate("MainWindow", "logn", 0, QApplication::UnicodeUTF8));
        Sin->setText(QApplication::translate("MainWindow", "sin", 0, QApplication::UnicodeUTF8));
        dB->setText(QApplication::translate("MainWindow", "dB", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
