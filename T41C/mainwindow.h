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

private:
    Ui::MainWindow *ui;

private slots:

    void digits_numbers();

    void operations();

    void on_pushButtondot_clicked();

    void math_operations();
    void  math_operations1();
    void on_pushButton_6_clicked();

    void on_pushButtontg_clicked();
    void on_pushButtonfac_clicked();

    void on_pushButtonDB_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_5_clicked();
    void on_dial_valueChanged(int value);
    void on_SelecNumbers_valueChanged(int value);
    void on_pushButton_8_clicked();
    void on_ADD_clicked();
};

#endif // MAINWINDOW_H
