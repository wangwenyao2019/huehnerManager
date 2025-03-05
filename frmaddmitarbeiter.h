#ifndef FRMADDMITARBEITER_H
#define FRMADDMITARBEITER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QSqlQuery>


namespace Ui {
class FrmAddMitarbeiter;
}

class FrmAddMitarbeiter : public QWidget
{
    Q_OBJECT

public:
    explicit FrmAddMitarbeiter(QWidget *parent, QSqlDatabase &db);
    ~FrmAddMitarbeiter();

private slots:
    void on_btnNeuMitarbeiter_clicked();
    void on_btnEntfernen_clicked();
    void on_btnSpeichern_clicked();

private:
    Ui::FrmAddMitarbeiter *ui;

    QStandardItemModel  *_model;
    QSqlDatabase        _db;
    QSqlQuery           *_query;

    void loadData();
};

#endif // FRMADDMITARBEITER_H
