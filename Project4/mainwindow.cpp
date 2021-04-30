#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_db = QSqlDatabase::addDatabase("QSQLITE"); //соединение объекта базы данных
                                    // с СУБД
    m_db.setDatabaseName("myDB");  //определение имени базы данных
    query = new QSqlQuery(m_db); // создание объекта для запроса
    if(!m_db.open()) // проверка на ошибку при открытии или создании базы данных
        throw "can't open database";
    if(!m_db.tables().contains("Tourism"))// если в базе не существует таблица  Person,
    { //то создание таблицы  Person и заполнение данными
        query->clear(); // очистка запроса
  query->exec("CREATE TABLE Tourism (ID INTEGER PRIMARY KEY, Company VARCHAR, Tours VARCHAR, Duration INTEGER, Cost INTEGER);");  // исполнение запроса на добавление записи
        query->clear();
        query->exec("INSERT INTO Tourism (ID,Company,Tours,Duration,Cost) VALUES (1,'Davinchi', 'Rif', 30, 15000);");
        query->clear();
        query->exec("INSERT INTO Tourism (ID,Company,Tours,Duration,Cost) VALUES (2,'Polet', 'Leti', 25, 14000);");
    }
    model = new QSqlTableModel(this,m_db); // создание
                              // редактируемой модели базы данных
    model->setTable("Tourism"); // создание модели таблицы  Person

    model->select(); // заполнение модели данными
    model->setEditStrategy(QSqlTableModel::OnFieldChange); // выбор стратегии
                    //  сохранения изменений в базе данных
                    //- сохранение происходит при переходе к другому полю
    ui->Tabel->setModel(model); // соединение модели
                    // и ее табличного представления в форме
}

MainWindow::~MainWindow()
{
    delete ui;
    delete query;
    delete model;
}



/*MainWindow::~MainWindow()
{
    delete ui;
}*/

void MainWindow::on_ADD_clicked()
{
            if(ui->PolID->text().isEmpty()||ui->PolCompany->text().isEmpty()||ui->PolTour->text().isEmpty()||
               ui->PolCost->text().isEmpty()||ui->PolDuration->text().isEmpty())
                    return;
            QString ID = ui->PolID->text();
            QString Company = ui->PolCompany->text();
            QString Tour = ui->PolTour->text();
            QString Cost = ui->PolCost->text();
            QString Duration = ui->PolDuration->text();
            QString temp = ID + ",'" + Company + "','" + Tour + "'," + Cost + "," + Duration;
            QString buff = tr("INSERT INTO Tourism (ID,Company,Tours,Duration,Cost) VALUES (") + temp + tr(");");
            query ->clear();
            query->exec(buff);
            model ->select();

}


void MainWindow::on_DELeTE_clicked()
{
            if(ui->PolDelID->text().isEmpty())
            return;
            QString ID = ui->PolDelID->text();
            query ->clear();
            query->exec(tr("DELETE FROM Tourism WHERE ID=")+ID);
            model ->select();
}

void MainWindow::on_AllData_clicked()
{
       model->setFilter("");
       model->select();
       ui->Tabel->setModel(model);
}

void MainWindow::on_Filtor1_clicked()
{
   if(ui->Filter11->text().isEmpty())
   return;
   QString filter = ui->Filter11->text();
   model->setFilter(tr("Cost>")+filter);
   model->select();
   ui->Tabel->setModel(model);
}


void MainWindow::on_Filtor2_clicked()
{
    if(ui->Filter22->text().isEmpty())
    return;
    QString filter = ui->Filter22->text();
    model->setFilter(tr("Cost>")+filter);
    model->select();
    ui->Tabel->setModel(model);
}
