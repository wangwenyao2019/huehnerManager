/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Datenzeigen;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_Huehnerverwaltung;
    QMenu *menu_Legeleistung;
    QMenu *menu_Fuetterung;
    QMenu *menu_Zucht;
    QMenu *menu_Krankheiten;
    QMenu *menu_Medikamentengabe;
    QMenu *menu_Pflege;
    QMenu *menu_Tierarzt;
    QMenu *menu_Sonstiges;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        action_Datenzeigen = new QAction(MainWindow);
        action_Datenzeigen->setObjectName("action_Datenzeigen");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_Huehnerverwaltung = new QMenu(menubar);
        menu_Huehnerverwaltung->setObjectName("menu_Huehnerverwaltung");
        menu_Legeleistung = new QMenu(menubar);
        menu_Legeleistung->setObjectName("menu_Legeleistung");
        menu_Legeleistung->setEnabled(true);
        menu_Fuetterung = new QMenu(menubar);
        menu_Fuetterung->setObjectName("menu_Fuetterung");
        menu_Fuetterung->setEnabled(false);
        menu_Zucht = new QMenu(menubar);
        menu_Zucht->setObjectName("menu_Zucht");
        menu_Zucht->setEnabled(false);
        menu_Krankheiten = new QMenu(menubar);
        menu_Krankheiten->setObjectName("menu_Krankheiten");
        menu_Krankheiten->setEnabled(false);
        menu_Medikamentengabe = new QMenu(menubar);
        menu_Medikamentengabe->setObjectName("menu_Medikamentengabe");
        menu_Medikamentengabe->setEnabled(false);
        menu_Pflege = new QMenu(menubar);
        menu_Pflege->setObjectName("menu_Pflege");
        menu_Pflege->setEnabled(false);
        menu_Tierarzt = new QMenu(menubar);
        menu_Tierarzt->setObjectName("menu_Tierarzt");
        menu_Tierarzt->setEnabled(false);
        menu_Sonstiges = new QMenu(menubar);
        menu_Sonstiges->setObjectName("menu_Sonstiges");
        menu_Sonstiges->setEnabled(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_Huehnerverwaltung->menuAction());
        menubar->addAction(menu_Legeleistung->menuAction());
        menubar->addAction(menu_Fuetterung->menuAction());
        menubar->addAction(menu_Zucht->menuAction());
        menubar->addAction(menu_Krankheiten->menuAction());
        menubar->addAction(menu_Medikamentengabe->menuAction());
        menubar->addAction(menu_Pflege->menuAction());
        menubar->addAction(menu_Tierarzt->menuAction());
        menubar->addAction(menu_Sonstiges->menuAction());
        menu_Huehnerverwaltung->addAction(action_Datenzeigen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Datenzeigen->setText(QCoreApplication::translate("MainWindow", "&Datenzeigen", nullptr));
        menu_Huehnerverwaltung->setTitle(QCoreApplication::translate("MainWindow", "&H\303\274hnerverwaltung", nullptr));
        menu_Legeleistung->setTitle(QCoreApplication::translate("MainWindow", "&Legeleistung", nullptr));
        menu_Fuetterung->setTitle(QCoreApplication::translate("MainWindow", "&F\303\274tterung", nullptr));
        menu_Zucht->setTitle(QCoreApplication::translate("MainWindow", "&Zucht", nullptr));
        menu_Krankheiten->setTitle(QCoreApplication::translate("MainWindow", "&Krankheiten", nullptr));
        menu_Medikamentengabe->setTitle(QCoreApplication::translate("MainWindow", "&Medikamentengabe", nullptr));
        menu_Pflege->setTitle(QCoreApplication::translate("MainWindow", "&Pflege", nullptr));
        menu_Tierarzt->setTitle(QCoreApplication::translate("MainWindow", "&Tierarzt", nullptr));
        menu_Sonstiges->setTitle(QCoreApplication::translate("MainWindow", "&Sonstiges", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
