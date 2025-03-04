#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmstammdaten.h"
#include "frmlegedaten.h"

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
    setWindowTitle(tr("Hühner Manager Pro v1.0"));

    //DB-Verbindung vorbereiten
    _db = QSqlDatabase::addDatabase("QODBC");
    _db.setConnectOptions();

    QString connectingstr = "Driver={Sql Server};Server=LAPTOP-MPVNF2N7\\SQLEXPRESS;"
                            "Database=huehnermanager;trusted_connection=yes";

    _db.setDatabaseName(connectingstr);
    if(!_db.open())
    {
        QMessageBox::critical(this, tr("Dantenbank-Verbindungsfehler"), _db.lastError().text());
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

void MainWindow::on_action_Stammdaten_triggered()
{
    setCentralWidget(new FrmStammdaten(this, _db));
}

void MainWindow::on_actionLegeLe_istung_erfassen_triggered()
{
    setCentralWidget(new Frmlegedaten(this, _db));
}

