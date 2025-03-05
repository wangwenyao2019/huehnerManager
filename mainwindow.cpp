#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmstammdaten.h"
#include "frmlegedaten.h"
#include "frmaddmitarbeiter.h"

#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QPixmap>

MainWindow::MainWindow(const QString &role, QWidget *parent, QSqlDatabase db)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,_db(db)
{
    ui->setupUi(this);

    if (!_db.isOpen())
    {
        QMessageBox::critical(this, tr("Datenbank-Verbindungsfehler"), _db.lastError().text());
        QApplication::quit();
        return;
    }
    qDebug() << "DB Available in MainWindow";

    QPixmap pix(":/icons/icon/chick.png");
    setWindowIcon(pix);
    setWindowTitle(tr("Hühner Manager Pro v1.0"));

    //Menü Hidden oder Anzeigen
    setMenuState(false);
    if(role == "admin")
        setMenuState(true);
    else
    {
        ui->menu_Huehnerverwaltung->setEnabled(true);
        ui->menu_Anderes->setEnabled(true);
    }
}

MainWindow::~MainWindow()
{
    _db.close();
    qDebug()<<"DB closed";
    delete ui;
}

void MainWindow::setMenuState(bool userState)
{
    ui->menu_Huehnerverwaltung->setEnabled(userState);
    ui->menu_Anderes->setEnabled(userState);
    ui->menu_Verwaltung->setEnabled(userState);
}

void MainWindow::on_action_Stammdaten_triggered()
{
    setCentralWidget(new FrmStammdaten(this, _db));
}

void MainWindow::on_actionLegeLe_istung_erfassen_triggered()
{
    setCentralWidget(new Frmlegedaten(this, _db));
}


void MainWindow::on_actionNeue_Mitarbeiter_triggered()
{
    setCentralWidget(new FrmAddMitarbeiter(this, _db));
}

