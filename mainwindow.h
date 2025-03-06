#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QPrinter>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(const QString &role, QWidget *parent = nullptr, QSqlDatabase db = QSqlDatabase());
    ~MainWindow();

private slots:
    void on_action_Stammdaten_2_triggered();
    void on_actionLegeLe_istung_erfassen_triggered();
    void on_actionNeue_Mitarbeiter_triggered();
    void on_action_Druck_triggered();

private:
    Ui::MainWindow *ui;

    QSqlDatabase   _db;
    QString        role;
    QPrinter       _print;

    void setMenuState(bool userState);
};
#endif // MAINWINDOW_H
