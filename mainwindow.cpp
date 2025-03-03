#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/icons/icon/chick.png");
    setWindowIcon(pix);
    setWindowTitle("Hühner Manager v1.0");

    //DB-Verbindung vorbereiten
    _db = QSqlDatabase::addDatabase("QODBC");
    _db.setConnectOptions();

    QString connectingstr = "Driver={Sql Server};Server=LAPTOP-MPVNF2N7\\SQLEXPRESS;"
                            "Database=huehnermanager;trusted_connection=yes";

    _db.setDatabaseName(connectingstr);
    if(!_db.open())
    {
        QMessageBox::critical(this, "Dantenbank-Verbindungsfehler", _db.lastError().text());
        return;
    }
    qDebug()<<"DB Opened";

}

MainWindow::~MainWindow()
{
    _db.close();
    qDebug()<<"DB closed";
    delete ui;
}
