#include "frmstammdaten.h"
#include "ui_frmstammdaten.h"

#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QDateTime>
#include <QString>

FrmStammdaten::FrmStammdaten(QWidget *parent, QSqlDatabase &db)
    : QWidget(parent)
    , ui(new Ui::FrmStammdaten)
{
    ui->setupUi(this);
    _db = db;
    _query = new QSqlQuery(_db);
    QString sqlStatement = "select * from stammdaten; ";
    if(!_query->exec(sqlStatement))
    {
        QMessageBox::warning(this,tr("Fehler beim Lesen der Projektdaten"),
                             _db.lastError().text());
        return;
    }

    //Vorarbeiten
    _model = new QStandardItemModel(0, 13, this);
    _model->setHorizontalHeaderItem( 0, new QStandardItem(tr("Ring-Nr.")));
    _model->setHorizontalHeaderItem( 1, new QStandardItem(tr("Name")));
    _model->setHorizontalHeaderItem( 2, new QStandardItem(tr("Datum")));
    _model->setHorizontalHeaderItem( 3, new QStandardItem(tr("Rasse")));
    _model->setHorizontalHeaderItem( 4, new QStandardItem(tr("Geschlecht")));
    _model->setHorizontalHeaderItem( 5, new QStandardItem(tr(("Stamm"))));
    _model->setHorizontalHeaderItem( 6, new QStandardItem(tr("FederFarbe")));
    _model->setHorizontalHeaderItem( 7, new QStandardItem(tr("Kammfarbe")));
    _model->setHorizontalHeaderItem( 8, new QStandardItem(tr("Gewicht")));
    _model->setHorizontalHeaderItem( 9, new QStandardItem(tr("verträglichkeit")));
    _model->setHorizontalHeaderItem(10, new QStandardItem(tr("Eierfarbe")));
    _model->setHorizontalHeaderItem(11, new QStandardItem(tr("Legeleistung")));
    _model->setHorizontalHeaderItem(12, new QStandardItem(tr("Eiergewicht")));
    _model->setHorizontalHeaderItem(13, new QStandardItem(tr("Befruchtungsrate")));

    ui->tvStammdaten->setModel(_model);
    ui->tvStammdaten->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);

    loadData();

    //Eigenschaften einstellen
    ui->tvStammdaten->setStyleSheet("background-color:white; "
                                    "alternate-background.color: #CFC;");
    ui->tvStammdaten->setAlternatingRowColors(true);
    ui->tvStammdaten->horizontalHeader()->setDefaultSectionSize(150);
    ui->tvStammdaten->setSortingEnabled(true);
    ui->tvStammdaten->setCornerButtonEnabled(true);
}

FrmStammdaten::~FrmStammdaten()
{
    delete _query;
    delete ui;
}

void FrmStammdaten::loadData()
{
    QSqlQuery query("SELECT * FROM stammdaten", _db);
    _model->removeRows(0, _model->rowCount());
    while(query.next())
    {
        int row = _model->rowCount();
        _model->insertRow(row);
        for (int col = 0; col < 14; col++)
        {
            _model->setItem(row, col, new QStandardItem(query.value(col).toString()));
        }
    }
}

void FrmStammdaten::on_btnNeu_2_clicked()
{
    int row = _model->rowCount();
    _model->insertRow(row);
    _model->setData(_model->index(row, 0), true, IsNewRole);
    ui->tvStammdaten->edit(_model->index(row, 0));

    _modus = Modus::newMode;
}

// /////////////////////////////////////////////////////////////////Speichern Daten
void FrmStammdaten::on_btnSpeichern_2_clicked()
{
    bool hasError = false;
    QSqlDatabase::database().transaction();
    QSqlQuery query(_db);

    for(int row = 0; row < _model->rowCount(); row++) {
        if(isRowEmpty(row)) continue; // wenn row leer ist, springen
        if(!_model->data(_model->index(row, 0), IsNewRole).toBool()) {
            continue;
        }
        if(!validateRow(row)) {
            hasError = true;
            break;
        }
        if(!saveRowToDatabase(row, query)) {
            hasError = true;
            break;
        }
    }
    if(!hasError) {
        QSqlDatabase::database().commit();
        QMessageBox::information(this, tr("Erfolg"), tr("Daten erfolgreich gespeichert!"));
        removeEmptyRows();
    } else {
        QSqlDatabase::database().rollback();
    }

    qDebug() << "r115-Executing SQL:" << query.lastQuery();
    qDebug() << "r116-Bound values:" << query.boundValues();
    loadData();
}

bool FrmStammdaten::isRowEmpty(int row) const
{
    return _model->item(row, 0) == nullptr ||
           _model->item(row, 0)->text().trimmed().isEmpty();
}

bool FrmStammdaten::validateRow(int row)
{
    const QString ringNr = _model->item(row, 0)->text();

    // ringNr pruefen
    if(ringNr.isEmpty()) {
        QMessageBox::warning(this, "Warnung", QString(tr("Zeile %1: Ring-Nr darf nicht leer sein")).arg(row+1));
        return false;
    }
    static QRegularExpression ringNrRegex("^\\d{2}[A-Z]\\d{4}$");
    if(!ringNrRegex.match(ringNr).hasMatch()) {
        QMessageBox::warning(this, "Warnung", QString(tr("Zeile %1: Ungültiges Ring-Nr-Format")).arg(row+1));
        return false;
    }
    return true;
}

bool FrmStammdaten::saveRowToDatabase(int row, QSqlQuery &query)
{
    query.prepare("INSERT INTO stammdaten ( "
                  "sd_ringnr, sd_name, sd_schlupfdatum, sd_rasse, sd_geschlecht, "
                  "sd_stamm, sd_federfarbe, sd_kammfarbe, sd_gewicht, sd_vertraeglichkeit, "
                  "sd_eierfarbe, sd_legeleistung, sd_eiergewicht, sd_befruchtungsrate) "
                  "VALUES ( "
                  ":ringnr, :name, :schlupfdatum, :rasse, :geschlecht, "
                  ":stamm, :federfarbe, :kammfarbe, :gewicht, :vertraeglichkeit, "
                  ":eierfarbe, :legeleistung, :eiergewicht, :befruchtungsrate)");
    auto itemText = [&](int col) {
        return _model->item(row, col) ? _model->item(row, col)->text() : "";
    };
    query.bindValue(":ringnr",          itemText( 0));
    query.bindValue(":name",            itemText( 1));
    query.bindValue(":schlupfdatum",    itemText( 2));
    query.bindValue(":rasse",           itemText( 3));
    query.bindValue(":geschlecht",      itemText( 4));
    query.bindValue(":stamm",           itemText( 5));
    query.bindValue(":federfarbe",      itemText( 6));
    query.bindValue(":kammfarbe",       itemText( 7));
    query.bindValue(":gewicht",         itemText( 8));
    query.bindValue(":vertraeglichkeit",itemText( 9));
    query.bindValue(":eierfarbe",       itemText(10));
    query.bindValue(":legeleistung",    itemText(11));
    query.bindValue(":eiergewicht",     itemText(12));
    query.bindValue(":befruchtungsrate",itemText(13));

    if(!query.exec()) {
        QMessageBox::critical(this, tr("Fehler"),
                              QString("Zeile %1:\n%2").arg(row+1).arg(query.lastError().text()));
        return false;
    }
    return true;
}

// Wenn btnSpeichern klicket, loeschen leere row
void FrmStammdaten::removeEmptyRows()
{
    for(int row = _model->rowCount()-1; row >= 0; row--) {
        if(isRowEmpty(row)) {
            _model->removeRow(row);
        }
    }
}

void FrmStammdaten::on_btnAbbrechen_2_clicked()
{
    loadData();
    _modus = Modus::noMode;
}

void FrmStammdaten::on_btnEntfernen_2_clicked()
{
    QModelIndexList selected = ui->tvStammdaten->selectionModel()->selectedRows();
    if (selected.isEmpty()) return;

    QSqlQuery query(_db);
    for (int i = selected.count() - 1; i >= 0; i--)
    {
        int row = selected[i].row();
        query.prepare("DELETE FROM stammdaten WHERE sd_ringnr = :ringnr");
        query.bindValue(":ringnr", _model->item(row, 0)->text());
        query.exec();
        _model->removeRow(row);
    }
}

