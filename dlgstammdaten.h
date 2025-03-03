#ifndef DLGSTAMMDATEN_H
#define DLGSTAMMDATEN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItemModel>

namespace Ui {
class DlgStammdaten;
}

class DlgStammdaten : public QDialog
{
    Q_OBJECT

public:
    explicit DlgStammdaten(QWidget *parent, QSqlDatabase &db);
    ~DlgStammdaten();

private slots:
    void on_btnNeu_clicked();
    void on_btnEinfuegen_clicked();
    void on_btnSpeichern_clicked();
    void on_btnAbbrechen_clicked();


private:
    Ui::DlgStammdaten *ui;

    QStandardItemModel  *_model;
    QSqlDatabase        _db;
    QSqlQuery           *_query;
};

#endif // DLGSTAMMDATEN_H
