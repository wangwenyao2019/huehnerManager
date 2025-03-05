#include "mainwindow.h"
#include "spalshscreen.h"
#include "dlgloginwindow.h"

#include <QApplication>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Datenbank verbinden
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setConnectOptions();
    QString connectingstr = "Driver={SQL Server};Server=LAPTOP-MPVNF2N7\\SQLEXPRESS;"
                            "Database=huehnermanager;Trusted_Connection=Yes";
    db.setDatabaseName(connectingstr);
    if (!db.open())
    {
        QMessageBox::critical(nullptr, "Datenbank-Verbindungsfehler", db.lastError().text());
        return 1;
    }
    qDebug() << "DB Opened in main";

    //Login Fenster oeffnen
    DlgLoginWindow *loginWindow = new DlgLoginWindow();

    if(loginWindow->exec() != QDialog::Accepted || !loginWindow->isLoggedIn())
    {
        delete loginWindow;
        return 0;
    }

    MainWindow w(loginWindow->getRole(), nullptr, db);

    // spalshScreen *spalshscreen = new spalshScreen();
    // spalshscreen->show();

    // QTimer::singleShot(3000, spalshscreen, SLOT(close()));
    // QTimer::singleShot(3000, &w, SLOT(show()));

    w.show();
    return a.exec();
}
