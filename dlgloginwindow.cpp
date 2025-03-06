#include "dlgloginwindow.h"
#include "ui_dlgloginwindow.h"

#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

DlgLoginWindow::DlgLoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DlgLoginWindow)
{
    ui->setupUi(this);

    setWindowTitle(tr("Login Fenster"));
    setWindowIcon(QIcon(":/img/Image/login.png"));
    setFixedSize(460, 320);
    ui->lePassword->setEchoMode(QLineEdit::Password);   // Setzt das Passwortfeld auf verdeckten Modus
    ui->btnPwShow->setIcon(QIcon(":/icons/icon/eyes-hidden.png"));
}

DlgLoginWindow::~DlgLoginWindow()
{
    delete ui;
}

void DlgLoginWindow::on_btnAnmelden_clicked()
{
    QString user_name     = ui->leUsername->text();
    QString user_password = ui->lePassword->text();

    if(user_name.isEmpty() || user_password.isEmpty())  // Prüft, ob Benutzername oder Passwort leer sind
    {
        QMessageBox::warning(this, tr("Fehler"),tr("Bitte Benutzername und Password eingeben"));
        return;
    }
    if(validateLogin(user_name, user_password))// Prüft die Anmeldedaten mit der Datenbank
    {
        username = user_name;
        loggedIn = true;    //Markiert den Benutzer als angemeldet
        accept();   // Schließt das Dialogfenster mit "Accepted"
    }
    else
    {
        QMessageBox::warning(this, tr("Fehler"), tr("Ungültiger Benutzername oder Passwort"));
    }

}


void DlgLoginWindow::on_btnAbbrechen_clicked()
{
    reject();       // Schließt das Dialogfenster mit "Rejected"
}

//Überprüfung der Anmeldedaten
bool DlgLoginWindow::validateLogin(const QString &username, const QString &password)
{
    QSqlQuery query(_db);
    query.prepare("SELECT password, role FROM admin where username = :username");
    query.bindValue(":username", username);

    if(!query.exec())
    {
        qDebug() << "Query error:" << _db.lastError().text();
        return false;
    }
    if(query.next())    //// Prüft, ob ein Ergebnis vorliegt
    {
        QString storedPassword = query.value(0).toString();
        role = query.value(1).toString();
        return storedPassword == password;  //normalweise soll hash sein
    }
    return false;
}

//Passwort anzeigen
void DlgLoginWindow::on_btnPwShow_clicked()
{
    if(ui->lePassword->echoMode() == QLineEdit::Password)
    {
        ui->btnPwShow ->setIcon(QIcon(":/icons/icon/eyes-open.png"));
        ui->lePassword->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->btnPwShow ->setIcon(QIcon(":/icons/icon/eyes-hidden.png"));
        ui->lePassword->setEchoMode(QLineEdit::Password);
    }
}

