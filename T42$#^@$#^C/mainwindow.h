#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>

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
    void on_ADD_clicked();

    void on_DELeTE_clicked();

    void on_AllData_clicked();

    void on_Filtor1_clicked();

    void on_Filtor2_clicked();

    void on_NATASHA_clicked();

    void on_DARK_clicked();

    void on_UPDATE_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase m_db;
    QSqlQuery* query;
    QSqlTableModel* model;
};

#endif // MAINWINDOW_H
