#ifndef DLGLOGINWINDOW_H
#define DLGLOGINWINDOW_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class DlgLoginWindow;
}

class DlgLoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DlgLoginWindow(QWidget *parent = nullptr);
    ~DlgLoginWindow();

    QString getUsername() const { return username; }
    QString getRole()     const { return role; }

    bool isLoggedIn() const { return loggedIn; }

private slots:
    void on_btnAnmelden_clicked();
    void on_btnAbbrechen_clicked();
    void on_btnPwShow_clicked();

private:
    Ui::DlgLoginWindow *ui;

    QSqlDatabase _db;
    QString      username;
    QString      role;

    bool loggedIn;
    bool validateLogin(const QString &username, const QString &password);
};

#endif // DLGLOGINWINDOW_H
