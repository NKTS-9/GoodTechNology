#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
double num_first;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_plusminus,SIGNAL(clicked()),this,SLOT(operations()));

    connect(ui->pushButton_pl,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_min,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_umn,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButton_del,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->pushButtonxn,SIGNAL(clicked()),this,SLOT(math_operations()));

    connect(ui->radioButton,SIGNAL(clicked()),this,SLOT(math_operations1()));
    connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(math_operations1()));
    connect(ui->radioButton_3,SIGNAL(clicked()),this,SLOT(math_operations1()));
    connect(ui->radioButton_4,SIGNAL(clicked()),this,SLOT(math_operations1()));

    ui->pushButton_pl->setCheckable(true);
    ui->pushButton_min->setCheckable(true);
    ui->pushButton_umn->setCheckable(true);
    ui->pushButton_del->setCheckable(true);
    ui->pushButtonxn->setCheckable(true);

    ui->radioButton->setCheckable(true);
    ui->radioButton_2->setCheckable(true);
    ui->radioButton_3->setCheckable(true);
    ui->radioButton_4->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    all_numbers = (ui->le->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);

    ui->le->setText(new_label);
}

void MainWindow::on_pushButtondot_clicked()
{
    if(!(ui->le->text().contains('.')))
        ui->le->setText(ui->le->text() + ".");
}

void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label;

    if(button->text() == "+/-") {
    all_numbers = (ui->le->text()).toDouble();
    all_numbers = all_numbers * -1;
    new_label = QString::number(all_numbers, 'g', 15);

    ui->le->setText(new_label);
    }
}


void MainWindow::math_operations()
{
     QPushButton *button = (QPushButton *)sender();

     num_first = ui->le->text().toDouble();

     ui->le->setText("");

     button->setChecked(true);

}
void MainWindow::math_operations1()
{
     QRadioButton *button = (QRadioButton *)sender();

     num_first = ui->le->text().toDouble();

     ui->le->setText("");

     button->setChecked(true);

}


void MainWindow::on_pushButton_6_clicked()
{
    double labelNumber, num_second;
    QString new_label;
    num_second = ui->le->text().toDouble();
    if(ui->pushButton_pl->isChecked()) {
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->le->setText(new_label);
        ui->pushButton_pl->setChecked(false);
    } else if(ui->pushButton_min->isChecked()) {
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->le->setText(new_label);
        ui->pushButton_min->setChecked(false);
    } else if(ui->pushButton_umn->isChecked()) {
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->result->setText(new_label);
        ui->pushButton_umn->setChecked(false);
    } else if(ui->pushButton_del->isChecked()) {
        if (num_second == 0) {
        ui->le->setText("error");
        } else
        {
           labelNumber = num_first / num_second;
           new_label = QString::number(labelNumber, 'g', 15);
             ui->le->setText(new_label);
             ui->pushButton_del->setChecked(false);
        }
    }
    else if(ui->pushButtonxn->isChecked()) {
            labelNumber = pow(num_first, num_second);
            new_label = QString::number(labelNumber, 'g', 15);
            ui->le->setText(new_label);
            ui->pushButtonxn->setChecked(false);
  }
}

void MainWindow::on_pushButton_7_clicked()
{

    double labelNumber, num_second;
    QString new_label;
    num_second = ui->le->text().toDouble();
    if(ui->radioButton_2->isChecked()) {
        labelNumber = num_first + num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->le->setText(new_label);
        ui->radioButton_2->setChecked(false);
    } else if(ui->radioButton->isChecked()) {
        labelNumber = num_first - num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->le->setText(new_label);
        ui->radioButton->setChecked(false);
    } else if(ui->radioButton_4->isChecked()) {
        labelNumber = num_first * num_second;
        new_label = QString::number(labelNumber, 'g', 15);
        ui->le->setText(new_label);
        ui->radioButton_4->setChecked(false);
    } else if(ui->radioButton_3->isChecked()) {
        if (num_second == 0) {
        ui->le->setText("error");
        } else
        {
           labelNumber = num_first / num_second;
           new_label = QString::number(labelNumber, 'g', 15);
             ui->le->setText(new_label);
             ui->radioButton_3->setChecked(false);

          }
    }
}


void MainWindow::on_pushButtontg_clicked()
{
    double all_numbers;
    QString res;
    all_numbers = (ui->le->text()).toDouble();
    res = QString::number(tan(all_numbers));
    ui->le->setText(res);
}

void MainWindow::on_pushButtonfac_clicked()
{
    double all_numbers;
    QString resu;
    all_numbers = (ui->le->text()).toDouble();
    int n = all_numbers;
    for  (int i = 1; i < n; i++) {
    all_numbers = all_numbers * i;
    }
    resu = QString::number(all_numbers, 'g', 15);
    ui->le->setText(resu);
}


void MainWindow::on_pushButtonDB_clicked()
{
    double all_numbers;
    QString rer;
    all_numbers = (ui->le->text()).toDouble();
    rer = QString::number(10 * (log10(all_numbers)));
    ui->le->setText(rer);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton_pl->setChecked(false);
     ui->pushButton_min->setChecked(false);
     ui->pushButton_umn->setChecked(false);
     ui->pushButton_del->setChecked(false);

    ui->le->setText("0");
}

void MainWindow::on_pushButton_clicked()
{
    double all_numbers;
    QString rerr;
    all_numbers = (ui->le->text()).toDouble();
    rerr = QString::number(cos(all_numbers));
    ui->le->setText(rerr);
}

void MainWindow::on_pushButton_3_clicked()
{
    double all_numbers;
    QString rea;
    all_numbers = (ui->le->text()).toDouble();
    rea = QString::number(log2(all_numbers));
    ui->le->setText(rea);
}

void MainWindow::on_pushButton_4_clicked()
{
    double all_numbers;
    QString rea;
    all_numbers = (ui->le->text()).toDouble();
    rea = QString::number(sqrt(all_numbers));
    ui->le->setText(rea);
}


void MainWindow::on_pushButton_5_clicked()
{
    int high; int low; QString M;

    M=(qrand() % ((high + 1) - low) + low);

    ui->pushButton_5->setText(M);
}

void MainWindow::on_SelecNumbers_valueChanged(int value)
{
    ui->lcdNumber->display(value);
}

void MainWindow::on_ADD_clicked()
{
    double a = ui ->lcdNumber->value();
    QString aa;
    aa.setNum(a);
    ui->le->setText(aa);
}
