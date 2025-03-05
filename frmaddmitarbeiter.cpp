#include "frmaddmitarbeiter.h"
#include "ui_frmaddmitarbeiter.h"
#include "enums.h"

#include <QMessageBox>
#include <QDate>
#include <QSqlError>

FrmAddMitarbeiter::FrmAddMitarbeiter(QWidget *parent, QSqlDatabase &db)
    : QWidget(parent)
    , ui(new Ui::FrmAddMitarbeiter)
{
    ui->setupUi(this);

    _db = db;
    _query = new QSqlQuery(_db);

    _model = new QStandardItemModel(0, 4, this);
    _model->setHorizontalHeaderItem(0, new QStandardItem(tr("Benutzername")));
    _model->setHorizontalHeaderItem(1, new QStandardItem(tr("Password")));
    _model->setHorizontalHeaderItem(2, new QStandardItem(tr("Role")));
    _model->setHorizontalHeaderItem(3, new QStandardItem(tr("User ID")));

    ui->tvMitarbeiter->setModel(_model);
    ui->tvMitarbeiter->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);
    ui->tvMitarbeiter->hideColumn(3);

    loadData();

    //Eigenschaften einstellen
    ui->tvMitarbeiter->setStyleSheet("background-color:white; "
                                   "alternate-background.color: #CFC;");
    ui->tvMitarbeiter->setAlternatingRowColors(true);
    ui->tvMitarbeiter->horizontalHeader()->setDefaultSectionSize(150);
    ui->tvMitarbeiter->setSortingEnabled(true);
    ui->tvMitarbeiter->setCornerButtonEnabled(true);
}

FrmAddMitarbeiter::~FrmAddMitarbeiter()
{
    delete ui;
}

void FrmAddMitarbeiter::on_btnNeuMitarbeiter_clicked()
{
    int row = _model->rowCount();
    _model->insertRow(row);
    _model->setItem(row, 0);
    _model->setData(_model->index(row, 0), true, IsNewRole);
    ui->tvMitarbeiter->edit(_model->index(row, 1));
}

void FrmAddMitarbeiter::on_btnSpeichern_clicked()
{
    QSqlQuery query(_db);
    for (int row = 0; row < _model->rowCount(); row++)
    {
        if(_model->data(_model->index(row, 0), IsNewRole).toBool())
        {
            query.prepare("INSERT INTO admin (username, password, role) "
                          "VALUES (:username, :password, :role); ");
            QStandardItem *item;
            item = _model->item(row, 0);
            query.bindValue(":username", item ? item->text() : QVariant());
            item = _model->item(row, 1);
            query.bindValue(":password", item ? item->text() : QVariant());
            item = _model->item(row, 2);
            query.bindValue(":role", item ? item->text() : QVariant());
            if (!query.exec())
            {
                QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
                return;
            }
            _model->setData(_model->index(row, 0), false, IsNewRole);
        }
    }
    QMessageBox::information(this, tr("Erfolg"), tr("Neue Daten erfolgreich gespeichert"));
    loadData();
}

void FrmAddMitarbeiter::on_btnEntfernen_clicked()
{
    QModelIndexList selectedRows = ui->tvMitarbeiter->selectionModel()->selectedRows();
    if(selectedRows.isEmpty()) {
        QMessageBox::warning(this, tr("Warnung"), tr("Bitte wählen Sie eine Zeile zum Löschen aus"));
        return;
    }

    int row = selectedRows.first().row();
    QStandardItem* idItem = _model->item(row, 3);

    QSqlQuery query(_db);
    query.prepare("DELETE FROM admin WHERE user_id = :user_id");
    query.bindValue(":user_id", idItem->text().toInt());

        if(query.exec()) {
            QMessageBox::information(this, tr("Erfolg"), tr("Mitarbeiter erfolgreich entfernt"));
            loadData();
        } else {
            QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
        }
    loadData();
}

void FrmAddMitarbeiter::loadData()
{
    QSqlQuery query("SELECT user_id, username, password, role FROM admin ORDER BY user_id ASC", _db);
    _model->removeRows(0, _model->rowCount());
    while (query.next())
    {
        int row = _model->rowCount();
        _model->insertRow(row);
        for (int col = 0; col < 4; col++)
        {
            _model->setItem(row, 0, new QStandardItem(query.value("username").toString()));
            _model->setItem(row, 1, new QStandardItem(query.value("password").toString()));
            _model->setItem(row, 2, new QStandardItem(query.value("role").toString()));
            _model->setItem(row, 3, new QStandardItem(query.value("user_id").toString()));
        }
    }
}
