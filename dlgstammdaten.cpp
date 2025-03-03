#include "dlgstammdaten.h"
#include "ui_dlgstammdaten.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QDateTime>
#include <QString>

DlgStammdaten::DlgStammdaten(QWidget *parent, QSqlDatabase &db)
    : QDialog(parent)
    , ui(new Ui::DlgStammdaten)
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
    _model->setHorizontalHeaderItem( 3, new QStandardItem(tr("Schlupfdatum")));
    _model->setHorizontalHeaderItem( 4, new QStandardItem(tr("Rasse")));
    _model->setHorizontalHeaderItem( 5, new QStandardItem(tr("Geschlecht")));
    _model->setHorizontalHeaderItem( 6, new QStandardItem(tr(("Stamm"))));
    _model->setHorizontalHeaderItem( 7, new QStandardItem(tr("FederFarbe")));
    _model->setHorizontalHeaderItem( 8, new QStandardItem(tr("Kammfarbe")));
    _model->setHorizontalHeaderItem( 9, new QStandardItem(tr("verträglichkeit")));
    _model->setHorizontalHeaderItem(10, new QStandardItem(tr("Eierfarbe")));
    _model->setHorizontalHeaderItem(11, new QStandardItem(tr("Legeleistung")));
    _model->setHorizontalHeaderItem(12, new QStandardItem(tr("Eiergewicht")));
    _model->setHorizontalHeaderItem(13, new QStandardItem(tr("Befruchtungsrate")));

    ui->tvStammdaten->setModel(_model);

    //Daten aus query auslesen
    _query->next();
    QString ring_nr, name, schlupfdatum, rasse, geschlecht, stamm, federfarbe,
            kammfarbe, gewicht, vertraeglichkeit, eierfarbe,
            legeleistung, eiergewicht, befruchtungsrate;
    ring_nr          = _query->value("sd_ringnr").toString();
    name             = _query->value("sd_name").toString();
    schlupfdatum     = _query->value("sd_schlupfdatum").toString();
    rasse            = _query->value("sd_rasse").toString();
    geschlecht       = _query->value("sd_geschlecht").toString();
    stamm            = _query->value("sd_stamm").toString();
    federfarbe       = _query->value("sd_federfarbe").toString();
    kammfarbe        = _query->value("sd_kammfarbe").toString();
    gewicht          = _query->value("sd_gewicht").toString();
    vertraeglichkeit = _query->value("sd_vertraeglichkeit").toString();
    eierfarbe        = _query->value("sd_eierfarbe").toString();
    legeleistung     = _query->value("sd_legeleistung").toString();
    eiergewicht      = _query->value("sd_eiergewicht").toString();
    befruchtungsrate = _query->value("sd_befruchtungsrate").toString();

    //Steuerelemente belegen
    _model->setItem(0, 0,new QStandardItem(ring_nr));
    _model->setItem(0, 1,new QStandardItem(name));
    _model->setItem(0, 2,new QStandardItem(schlupfdatum));
    _model->setItem(0, 3,new QStandardItem(rasse));
    _model->setItem(0, 4,new QStandardItem(geschlecht));
    _model->setItem(0, 5,new QStandardItem(stamm));
    _model->setItem(0, 6,new QStandardItem(federfarbe));
    _model->setItem(0, 7,new QStandardItem(kammfarbe));
    _model->setItem(0, 8,new QStandardItem(gewicht));
    _model->setItem(0, 9,new QStandardItem(vertraeglichkeit));
    _model->setItem(0,10,new QStandardItem(eierfarbe));
    _model->setItem(0,11,new QStandardItem(legeleistung));
    _model->setItem(0,12,new QStandardItem(eiergewicht));
    _model->setItem(0,13,new QStandardItem(befruchtungsrate));

    int zeile =1;
    while(_query->next())
    {
        //Daten aus query lesen
        ring_nr          = _query->value("sd_ringnr").toString();
        name             = _query->value("sd_name").toString();
        schlupfdatum     = _query->value("sd_schlupfdatum").toString();
        rasse            = _query->value("sd_rasse").toString();
        geschlecht       = _query->value("sd_geschlecht").toString();
        stamm            = _query->value("sd_stamm").toString();
        federfarbe       = _query->value("sd_federfarbe").toString();
        kammfarbe        = _query->value("sd_kammfarbe").toString();
        gewicht          = _query->value("sd_gewicht").toString();
        vertraeglichkeit = _query->value("sd_vertraeglichkeit").toString();
        eierfarbe        = _query->value("sd_eierfarbe").toString();
        legeleistung     = _query->value("sd_legeleistung").toString();
        eiergewicht      = _query->value("sd_eiergewicht").toString();
        befruchtungsrate = _query->value("sd_befruchtungsrate").toString();

        //Daten ins Model uebertragen
        _model->setItem(zeile,  0, new QStandardItem(ring_nr));
        _model->setItem(zeile,  1, new QStandardItem(name));
        _model->setItem(zeile,  2, new QStandardItem(schlupfdatum));
        _model->setItem(zeile,  3, new QStandardItem(rasse));
        _model->setItem(zeile,  4, new QStandardItem(geschlecht));
        _model->setItem(zeile,  5, new QStandardItem(stamm));
        _model->setItem(zeile,  6, new QStandardItem(federfarbe));
        _model->setItem(zeile,  7, new QStandardItem(kammfarbe));
        _model->setItem(zeile,  8, new QStandardItem(gewicht));
        _model->setItem(zeile,  9, new QStandardItem(vertraeglichkeit));
        _model->setItem(zeile, 10, new QStandardItem(eierfarbe));
        _model->setItem(zeile, 11, new QStandardItem(legeleistung));
        _model->setItem(zeile, 12, new QStandardItem(eiergewicht));
        _model->setItem(zeile, 13, new QStandardItem(befruchtungsrate));
        zeile++;
    }

    //Eigenschaften einstellen
    ui->tvStammdaten->setStyleSheet("background-color:white; "
                                 "alternate-background.color: #CFC;");
    ui->tvStammdaten->setAlternatingRowColors(true);
    ui->tvStammdaten->horizontalHeader()->setDefaultSectionSize(150);
    ui->tvStammdaten->setSortingEnabled(true);
    ui->tvStammdaten->setCornerButtonEnabled(true);
}

DlgStammdaten::~DlgStammdaten()
{
    delete ui;
}

void DlgStammdaten::on_btnNeu_clicked()
{
    int row = _model->rowCount();
    _model->insertRows(row, 1);

    QModelIndex index = _model->index(row, 1);
    ui->tvStammdaten->setCurrentIndex(index);
    ui->tvStammdaten->edit(index);
}

void DlgStammdaten::on_btnBearbeiten_clicked()
{
    int row = ui->tvStammdaten->currentIndex().row(); // Merke Dir die aktuelle Position des Cursors
    _model->insertRows(row, 1); //An gemerkter Position, eine Zeile anhaegen

    //Benutzerkomfort
    QModelIndex index = _model->index(row,1); //Merke dir die Adresse des neuen Elementes
    ui->tvStammdaten->setCurrentIndex(index); //Positioniere auf das neue Element
    ui->tvStammdaten->edit(index);           //Oeffne das neue Element zum Bearbeiten
}

void DlgStammdaten::on_btnSpeichern_clicked()
{

}

void DlgStammdaten::on_btnAbbrechen_clicked()
{

}

void DlgStammdaten::on_btnEinfuegen_clicked()
{

}

