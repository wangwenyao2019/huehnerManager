#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

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
    void on_action_Stammdaten_triggered();
    void on_actionLegeLe_istung_erfassen_triggered();

    void on_actionNeue_Mitarbeiter_triggered();

private:
    Ui::MainWindow *ui;

    QSqlDatabase   _db;
    QString        role;

    void setMenuState(bool userState);
};
#endif // MAINWINDOW_H
