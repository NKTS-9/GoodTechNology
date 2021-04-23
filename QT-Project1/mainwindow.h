#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void on_Summ_clicked();

    void on_Ext_clicked();

    void on_Div_clicked();

    void on_Mult_clicked();

    void on_Sqrt_clicked();

    void on_SqrtN_clicked();

    void on_Power_clicked();

    void on_Factorial_clicked();

    void on_logn_clicked();

    void on_pushButton_20_clicked();

    void on_Sin_clicked();

    void on_One_clicked();

    void on_Two_clicked();

    void on_Three_clicked();

    void on_Four_clicked();

    void on_Five_clicked();

    void on_Six_clicked();

    void on_Seven_clicked();

    void on_Eight_clicked();

    void on_Nine_clicked();

    void on_ZERO_clicked();

    void on_dB_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
