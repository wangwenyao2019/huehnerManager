#ifndef FRMSTAMMDATEN_H
#define FRMSTAMMDATEN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItemModel>

#include "enums.h"

namespace Ui {
class FrmStammdaten;
}

class FrmStammdaten : public QWidget
{
    Q_OBJECT

private slots:
    void removeEmptyRows();
    void on_btnNeu_2_clicked();
    void on_btnAbbrechen_2_clicked();
    void on_btnSpeichern_2_clicked();
    void on_btnEntfernen_2_clicked();

public:
    explicit FrmStammdaten(QWidget *parent, QSqlDatabase &db);
    ~FrmStammdaten();

private:
    Ui::FrmStammdaten *ui;

    QStandardItemModel  *_model;
    QSqlDatabase        _db;
    QSqlQuery           *_query;
    Modus               _modus;

    QList<QStringList> _originalData;

    int               _currentRecord;
    int               _recordCount;

    bool isRowEmpty(int row) const;
    bool validateRow(int row);
    bool saveRowToDatabase(int row, QSqlQuery &query);
    void refreshScreen();
    void loadData();
};

#endif // FRMSTAMMDATEN_H
