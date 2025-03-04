#include "frmlegedaten.h"
#include "ui_frmlegedaten.h"

#include <QMessageBox>
#include <QDate>
#include <QSqlError>

Frmlegedaten::Frmlegedaten(QWidget *parent, QSqlDatabase &db)
    : QWidget(parent)
    , ui(new Ui::Frmlegedaten)
{
    ui->setupUi(this);
    _db = db;
    _query = new QSqlQuery(_db);

    _model = new QStandardItemModel(0, 5, this);
    _model->setHorizontalHeaderItem(0, new QStandardItem(tr("Datum")));
    _model->setHorizontalHeaderItem(1, new QStandardItem(tr("Ring-Nr.")));
    _model->setHorizontalHeaderItem(2, new QStandardItem(tr("Markierungsfarbe")));
    _model->setHorizontalHeaderItem(3, new QStandardItem(tr("Anzahl")));
    _model->setHorizontalHeaderItem(4, new QStandardItem(tr("Gewicht")));

    ui->tvLegedaten->setModel(_model);
    ui->tvLegedaten->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);

    loadData();

    //Eigenschaften einstellen
    ui->tvLegedaten->setStyleSheet("background-color:white; "
                                    "alternate-background.color: #CFC;");
    ui->tvLegedaten->setAlternatingRowColors(true);
    ui->tvLegedaten->horizontalHeader()->setDefaultSectionSize(150);
    ui->tvLegedaten->setSortingEnabled(true);
    ui->tvLegedaten->setCornerButtonEnabled(true);
}

Frmlegedaten::~Frmlegedaten()
{
    delete _query;
    delete ui;
}

void Frmlegedaten::loadData()
{
    QSqlQuery _query("SELECT * FROM legedaten", _db);
    _model->removeRows(0, _model->rowCount());
    while (_query.next())
    {
        int row = _model->rowCount();
        _model->insertRow(row);
        for (int col = 0; col < 5; col++)
        {
            _model->setItem(row, col, new QStandardItem(_query.value(col).toString()));
        }
    }
}

void Frmlegedaten::on_btnNeu_clicked()
{
    int row = _model->rowCount();
    _model->insertRow(row);
    _model->setItem(row, 0, new QStandardItem(QDate::currentDate().toString("yyyy-MM-dd")));
    ui->tvLegedaten->edit(_model->index(row, 1));
}

void Frmlegedaten::on_btnSpeichern_clicked()
{
    QSqlQuery query(_db);
    for (int r = 0; r < _model->rowCount(); r++)
    {
        query.prepare("INSERT INTO legedaten (lm_datum, lm_ring_nr, lm_markierungs_farbe, lm_anzahl, lm_gewicht) "
                       "VALUES (:datum, :ringnr, :farbe, :anzahl, :gewicht) ");
        for (int col = 0; col < 5; ++col)
        {
            query.bindValue(col, _model->item(r, col) ? _model->item(r, col)->text() : QVariant());
        }
        if (!query.exec())
        {
            QMessageBox::critical(this, tr("Fehler"), _db.lastError().text());
            return;
        }
    }
}

void Frmlegedaten::on_btnLegestarten_clicked()
{
    QSqlQuery query(_db);
    if (!query.exec("DELETE FROM legedaten;"))
    {
        QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
    }
    else
    {
        QMessageBox::information(this, tr("Info"), tr("Legemessung gestartet, alte Daten gelöscht."));
    }
}

void Frmlegedaten::on_btnLegeSchliessen_clicked()
{
    QSqlQuery query(_db);
    QString sql = "SELECT lm_ring_nr AS ring_nr, "
                  "SUM(lm_anzahl)*365/(SELECT DATEDIFF(day, MIN(lm_datum), MAX(lm_datum)) + 1) AS anzahl, "
                  "SUM(lm_gewicht) / SUM(lm_anzahl) AS schnittgewicht "
                  "INTO legestatistik FROM legedaten GROUP BY lm_ring_nr;";
    if (!query.exec(sql))
    {
        QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
        return;
    }

    sql = "UPDATE stammdaten "
          "SET sd_legeleistung = (SELECT anzahl FROM legestatistik WHERE sd_ringnr = ring_nr), "
          "sd_eiergewicht = (SELECT schnittgewicht FROM legestatistik WHERE sd_ringnr = ring_nr); ";
    if (!query.exec(sql))
    {
        QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
        return;
    }

    if (!query.exec("DROP TABLE legestatistik;"))
    {
        QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
        return;
    }

    QMessageBox::information(this, tr("Info"), tr("Legemessung abgeschlossen, Daten übertragen."));
}

