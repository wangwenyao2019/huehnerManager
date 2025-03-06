#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frmstammdaten.h"
#include "frmlegedaten.h"
#include "frmaddmitarbeiter.h"

#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QPixmap>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QTextDocument>
#include <QTextCursor>
#include <QPainter>
#include <QTableView>

MainWindow::MainWindow(const QString &role, QWidget *parent, QSqlDatabase db)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,_db(db)
{
    ui->setupUi(this);

    if (!_db.isOpen())
    {
        QMessageBox::critical(this, tr("Datenbank-Verbindungsfehler"), _db.lastError().text());
        QApplication::quit();
        return;
    }
    qDebug() << "DB Available in MainWindow";

    QPixmap pix(":/icons/icon/chick.png");
    setWindowIcon(pix);
    setWindowTitle(tr("Hühner Manager Pro v1.0"));

    //Menü Hidden oder Anzeigen
    setMenuState(false);
    if(role == "admin")
        setMenuState(true);
    else
    {
        ui->menu_Huehnerverwaltung->setEnabled(true);
        ui->menu_Anderes->setEnabled(true);
    }
}

MainWindow::~MainWindow()
{
    _db.close();
    qDebug()<<"DB closed";
    delete ui;
}

void MainWindow::setMenuState(bool userState)
{
    ui->menu_Huehnerverwaltung->setEnabled(userState);
    ui->menu_Anderes->setEnabled(userState);
    ui->menu_Verwaltung->setEnabled(userState);
}

void MainWindow::on_action_Stammdaten_2_triggered()
{
    setCentralWidget(new FrmStammdaten(this, _db));
}

void MainWindow::on_actionLegeLe_istung_erfassen_triggered()
{
    setCentralWidget(new Frmlegedaten(this, _db));
}

void MainWindow::on_actionNeue_Mitarbeiter_triggered()
{
    setCentralWidget(new FrmAddMitarbeiter(this, _db));
}


void MainWindow::on_action_Druck_triggered()
{
   FrmStammdaten *stammdaten = qobject_cast<FrmStammdaten*>(centralWidget());
    if(!stammdaten)
   {
       QMessageBox::warning(this, tr("Drucken"), tr("Bitte wechseln Sie zuerst zur Stammdaten-Seite"));
       return;
    }
    QTableView *tableView = stammdaten->findChild<QTableView*>("tvStammdaten");
    if (!tableView || !tableView->model()) {
        QMessageBox::warning(this, tr("Fehler"), tr("Tabellenansicht nicht gefunden"));
        return;
    }
    QString html;
    QAbstractItemModel *model = tableView->model();
    html = "<html><head><style>"
           "table { border-collapse: collapse; width: auto; }"
           "th, td { border: 1px solid black; padding: 2px; }"
           "</style></head><body>"
           "<h2>Hühner Stammdaten</h2>"
           "<table>";
    html += "<tr>";
    for (int col = 0; col < model->columnCount(); ++col) {
        html += "<th>" + model->headerData(col, Qt::Horizontal).toString() + "</th>";
    }
    html += "</tr>";
    for (int row = 0; row < model->rowCount(); ++row) {
        html += "<tr>";
        for (int col = 0; col < model->columnCount(); ++col) {
            html += "<td>" + model->index(row, col).data().toString() + "</td>";
        }
        html += "</tr>";
    }

    html += "</table></body></html>";
    QTextDocument doc;
    doc.setHtml(html);
    QPrinter printer(QPrinter::HighResolution);
    QPrintPreviewDialog preview(&printer, this);
    QObject::connect(&preview, &QPrintPreviewDialog::paintRequested,
                     [&doc](QPrinter *printer) {
                         doc.print(printer);
                     });
     preview.exec();

}

