#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

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

void MainWindow::on_Summ_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    float s = a+b;
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_Ext_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    float s = a-b;
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_Div_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    if(b!=0)
    {
    float s = a/b;
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
    }
    else
    {
    ui->lineEdit_3->setText("WTF");
    }
}

void MainWindow::on_Mult_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    float s = a*b;
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_Sqrt_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    if(a>=0)
    {
    float s = sqrt(a);
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
    }
    else
    {
    ui->lineEdit_3->setText("WTF");
    }
}

void MainWindow::on_SqrtN_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    float s = pow(a,1/b);
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_Power_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    float s = pow(a,b);
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_Factorial_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float s = 0;
    for(int i=1;i<a+1;i++)
    {
        s+=i;
    }
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_logn_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    float s = log(a)/log(b);
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_Sin_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float s = sin(a);
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}

void MainWindow::on_One_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(1);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(1);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Two_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(2);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(2);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Three_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(3);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(3);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Four_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(4);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(4);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Five_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(5);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(5);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Six_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(6);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(6);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Seven_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(7);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(7);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Eight_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(8);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(8);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_Nine_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(9);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(9);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_ZERO_clicked()
{
    QString a = ui->lineEdit->text();
    if(a.isEmpty())
    {
        a.setNum(0);
        ui->lineEdit->setText(a);
    }
    else
    {
        a.setNum(0);
        ui->lineEdit_2->setText(a);
    }
}

void MainWindow::on_dB_clicked()
{
    float a = ui->lineEdit->text().toFloat();
    float b = ui->lineEdit_2->text().toFloat();
    float s = log10(a/b);
    QString str;
    str.setNum(s);
    ui->lineEdit_3->setText(str);
}
