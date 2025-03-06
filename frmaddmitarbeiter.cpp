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

    _db = db;                       // Speichert die Datenbankverbindung
    _query = new QSqlQuery(_db);    // Abfrageobjekt mit der Datenbankverbindung

    _model = new QStandardItemModel(0, 4, this);    // Erstellt ein neues Modell mit 0 Zeilen und 4 Spalten
    _model->setHorizontalHeaderItem(0, new QStandardItem(tr("Benutzername")));
    _model->setHorizontalHeaderItem(1, new QStandardItem(tr("Password")));
    _model->setHorizontalHeaderItem(2, new QStandardItem(tr("Rolle")));
    _model->setHorizontalHeaderItem(3, new QStandardItem(tr("Benutzer ID")));

    ui->tvMitarbeiter->setModel(_model);        //Setzt das Modell für die TabellenansichtSetzt das Modell für die Tabellenansicht
    ui->tvMitarbeiter->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);   //Bearbeitung durch Doppelklick oder Taste
    ui->tvMitarbeiter->hideColumn(3);           //Verbirgt die Benutzer-ID-Spalte

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
    int row = _model->rowCount();                                   //olt die aktuelle Zeilenanzahl
    _model->insertRow(row);                                         // Fügt eine neue Zeile am Ende hinzu
    _model->setItem(row, 0);
    _model->setData(_model->index(row, 0), true, IsNewRole);        // Markiert die Zeile als neu (Setzt den "Neu"-Status)
    ui->tvMitarbeiter->edit(_model->index(row, 1));                 //1 = Startet die Bearbeitung der Passwortspalte
}

void FrmAddMitarbeiter::on_btnSpeichern_clicked()
{
    QSqlQuery query(_db);
    for (int row = 0; row < _model->rowCount(); row++)
    {
        if(_model->data(_model->index(row, 0), IsNewRole).toBool())     // Prüft, ob die Zeile neu ist
        {
            query.prepare("INSERT INTO admin (username, password, role) "
                          "VALUES (:username, :password, :role) ");
            QStandardItem *item;
            item = _model->item(row, 0);
            query.bindValue(":username", item ? item->text() : QVariant()); // Bindet den Benutzernamen oder einen leeren Wert
            item = _model->item(row, 1);
            query.bindValue(":password", item ? item->text() : QVariant()); //Standardkonstruktion： QVariant() erstellt ein leeres, ungültiges Variantenobjekt, das keinen Wert enthält.
            item = _model->item(row, 2);
            query.bindValue(":role", item ? item->text() : QVariant());     //Wenn item leer ist, wird QVariant() verwendet, um einen leeren Wert bereitzustellen,
                                                                            //um Programmabstürze zu verhindern.
            if (!query.exec())
            {
                QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
                return;
            }
            _model->setData(_model->index(row, 0), false, IsNewRole);   //Markiert die Zeile als gespeichert
        }
    }
    QMessageBox::information(this, tr("Erfolg"), tr("Neue Daten erfolgreich gespeichert"));
    loadData();
}

// QVariant ist ein Variantentyp in Qt, der es Entwicklern ermöglicht, Daten zu speichern und zu manipulieren, ohne den genauen Datentyp im Voraus zu kennen.
// Es ist ein universeller Container, der flexibel verschiedene Werte speichern und umwandeln kann.
// Beispiel：
// QVariant var;                // Erstellt ein leeres QVariant-Objekt
// var = 42;                    // Speichert eine Ganzzahl
// int value = var.toInt();     // Konvertiert zu einer Ganzzahl
// var = "Hallo";               // Speichert eine Zeichenkette
// QString str = var.toString(); // Konvertiert zu einer Zeichenkette

void FrmAddMitarbeiter::on_btnEntfernen_clicked()
{
    QModelIndexList selectedRows = ui->tvMitarbeiter->selectionModel()->selectedRows();                 //markierten Zeilen
    if(selectedRows.isEmpty()) {                                                                        // Prüft, ob eine Zeile ausgewählt wurde
        QMessageBox::warning(this, tr("Warnung"), tr("Bitte wählen Sie eine Zeile zum Löschen aus"));
        return;
    }

    int row = selectedRows.first().row();           // Holt die Zeilennummer der ersten Auswahl
    QStandardItem* idItem = _model->item(row, 3);   // Holt die Benutzer-ID aus der vierten Spalte

    QSqlQuery query(_db);
    query.prepare("DELETE FROM admin WHERE user_id = :user_id");
    query.bindValue(":user_id", idItem->text().toInt());

        if(query.exec()) {
            QMessageBox::information(this, tr("Erfolg"), tr("Mitarbeiter erfolgreich entfernt"));
            loadData();
        } else {
            QMessageBox::critical(this, tr("Fehler"), query.lastError().text());
        }
}

void FrmAddMitarbeiter::loadData()
{
    QSqlQuery query("SELECT user_id, username, password, role FROM admin ", _db);
    _model->removeRows(0, _model->rowCount());
    while (query.next())
    {
        int row = _model->rowCount();
        _model->insertRow(row);
        _model->setItem(row, 0, new QStandardItem(query.value("username").toString()));
        _model->setItem(row, 1, new QStandardItem(query.value("password").toString()));
        _model->setItem(row, 2, new QStandardItem(query.value("role").toString()));
        _model->setItem(row, 3, new QStandardItem(query.value("user_id").toString()));

    }
}
