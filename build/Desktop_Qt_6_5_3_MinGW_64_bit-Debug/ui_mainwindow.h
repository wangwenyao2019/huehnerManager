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
    QAction *action_Stammdaten;
    QAction *actionLegeLe_istung_erfassen;
    QAction *actionFuetterung;
    QAction *actionZucht;
    QAction *actionKrankheit;
    QAction *actionMedikamentengabe;
    QAction *actionPflege;
    QAction *actionTierarzt;
    QAction *actionSonstiges;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_Huehnerverwaltung;
    QMenu *menu_Legeleistung;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(687, 448);
        action_Stammdaten = new QAction(MainWindow);
        action_Stammdaten->setObjectName("action_Stammdaten");
        actionLegeLe_istung_erfassen = new QAction(MainWindow);
        actionLegeLe_istung_erfassen->setObjectName("actionLegeLe_istung_erfassen");
        actionFuetterung = new QAction(MainWindow);
        actionFuetterung->setObjectName("actionFuetterung");
        actionFuetterung->setEnabled(false);
        actionZucht = new QAction(MainWindow);
        actionZucht->setObjectName("actionZucht");
        actionZucht->setEnabled(false);
        actionKrankheit = new QAction(MainWindow);
        actionKrankheit->setObjectName("actionKrankheit");
        actionKrankheit->setEnabled(false);
        actionMedikamentengabe = new QAction(MainWindow);
        actionMedikamentengabe->setObjectName("actionMedikamentengabe");
        actionMedikamentengabe->setEnabled(false);
        actionPflege = new QAction(MainWindow);
        actionPflege->setObjectName("actionPflege");
        actionPflege->setEnabled(false);
        actionTierarzt = new QAction(MainWindow);
        actionTierarzt->setObjectName("actionTierarzt");
        actionTierarzt->setEnabled(false);
        actionSonstiges = new QAction(MainWindow);
        actionSonstiges->setObjectName("actionSonstiges");
        actionSonstiges->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 687, 21));
        menu_Huehnerverwaltung = new QMenu(menubar);
        menu_Huehnerverwaltung->setObjectName("menu_Huehnerverwaltung");
        menu_Legeleistung = new QMenu(menubar);
        menu_Legeleistung->setObjectName("menu_Legeleistung");
        menu_Legeleistung->setEnabled(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_Huehnerverwaltung->menuAction());
        menubar->addAction(menu_Legeleistung->menuAction());
        menu_Huehnerverwaltung->addAction(action_Stammdaten);
        menu_Huehnerverwaltung->addAction(actionLegeLe_istung_erfassen);
        menu_Legeleistung->addAction(actionFuetterung);
        menu_Legeleistung->addAction(actionZucht);
        menu_Legeleistung->addAction(actionKrankheit);
        menu_Legeleistung->addAction(actionMedikamentengabe);
        menu_Legeleistung->addAction(actionPflege);
        menu_Legeleistung->addAction(actionTierarzt);
        menu_Legeleistung->addAction(actionSonstiges);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Stammdaten->setText(QCoreApplication::translate("MainWindow", "&Stammdaten verwalten", nullptr));
        actionLegeLe_istung_erfassen->setText(QCoreApplication::translate("MainWindow", "LegeLe&istung erfassen", nullptr));
        actionFuetterung->setText(QCoreApplication::translate("MainWindow", "F\303\274tterung", nullptr));
        actionZucht->setText(QCoreApplication::translate("MainWindow", "Zucht", nullptr));
        actionKrankheit->setText(QCoreApplication::translate("MainWindow", "Krankheit", nullptr));
        actionMedikamentengabe->setText(QCoreApplication::translate("MainWindow", "Medikamentengabe", nullptr));
        actionPflege->setText(QCoreApplication::translate("MainWindow", "Pflege", nullptr));
        actionTierarzt->setText(QCoreApplication::translate("MainWindow", "Tierarzt", nullptr));
        actionSonstiges->setText(QCoreApplication::translate("MainWindow", "Sonstiges", nullptr));
        menu_Huehnerverwaltung->setTitle(QCoreApplication::translate("MainWindow", "&H\303\274hnerverwaltung", nullptr));
        menu_Legeleistung->setTitle(QCoreApplication::translate("MainWindow", "&Other", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
