#ifndef FRMLEGEDATEN_H
#define FRMLEGEDATEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QSqlQuery>

namespace Ui {
class Frmlegedaten;
}

class Frmlegedaten : public QWidget
{
    Q_OBJECT

public:
    explicit Frmlegedaten(QWidget *parent, QSqlDatabase &db);
    ~Frmlegedaten();

private slots:
    void on_btnNeu_clicked();
    void on_btnSpeichern_clicked();
    void on_btnLegestarten_clicked();
    void on_btnLegeSchliessen_clicked();

private:
    Ui::Frmlegedaten *ui;

    QStandardItemModel  *_model;
    QSqlDatabase        _db;
    QSqlQuery           *_query;

    void loadData();
};

#endif // FRMLEGEDATEN_H
