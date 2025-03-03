#include "mainwindow.h"
#include "spalshscreen.h"

#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // spalshScreen *splashscreen = new spalshScreen();
    // splashscreen->show();
    MainWindow w;

    // QTimer::singleShot(3000, splashscreen, SLOT(close()));
    // QTimer::singleShot(3000, &w, SLOT(show()));

    w.show();
    return a.exec();
}
