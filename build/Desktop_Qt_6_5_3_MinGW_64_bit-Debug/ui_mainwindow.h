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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLegeLe_istung_erfassen;
    QAction *actionFuetterung;
    QAction *actionZucht;
    QAction *actionKrankheit;
    QAction *actionMedikamentengabe;
    QAction *actionPflege;
    QAction *actionTierarzt;
    QAction *actionSonstiges;
    QAction *actionNeue_Mitarbeiter;
    QAction *action_Deutsch;
    QAction *action_Chinesisch;
    QAction *action_Englisch;
    QAction *action_Stammdaten_2;
    QAction *action_Druck;
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menu_Huehnerverwaltung;
    QMenu *menu_Anderes;
    QMenu *menu_Sprach;
    QMenu *menu_Verwaltung;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1556, 954);
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
        actionNeue_Mitarbeiter = new QAction(MainWindow);
        actionNeue_Mitarbeiter->setObjectName("actionNeue_Mitarbeiter");
        action_Deutsch = new QAction(MainWindow);
        action_Deutsch->setObjectName("action_Deutsch");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icon/german9.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Deutsch->setIcon(icon);
        action_Chinesisch = new QAction(MainWindow);
        action_Chinesisch->setObjectName("action_Chinesisch");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icon/china.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Chinesisch->setIcon(icon1);
        action_Englisch = new QAction(MainWindow);
        action_Englisch->setObjectName("action_Englisch");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icon/english9.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Englisch->setIcon(icon2);
        action_Stammdaten_2 = new QAction(MainWindow);
        action_Stammdaten_2->setObjectName("action_Stammdaten_2");
        action_Druck = new QAction(MainWindow);
        action_Druck->setObjectName("action_Druck");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(360, 330, 714, 263));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setAutoFillBackground(false);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/jidan.jpg")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setAutoFillBackground(false);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/xiaoji.jpg")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAutoFillBackground(false);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/muji.jpg")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1556, 21));
        menu_Huehnerverwaltung = new QMenu(menubar);
        menu_Huehnerverwaltung->setObjectName("menu_Huehnerverwaltung");
        menu_Anderes = new QMenu(menubar);
        menu_Anderes->setObjectName("menu_Anderes");
        menu_Anderes->setEnabled(true);
        menu_Sprach = new QMenu(menu_Anderes);
        menu_Sprach->setObjectName("menu_Sprach");
        menu_Verwaltung = new QMenu(menubar);
        menu_Verwaltung->setObjectName("menu_Verwaltung");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_Huehnerverwaltung->menuAction());
        menubar->addAction(menu_Anderes->menuAction());
        menubar->addAction(menu_Verwaltung->menuAction());
        menu_Huehnerverwaltung->addAction(actionLegeLe_istung_erfassen);
        menu_Huehnerverwaltung->addSeparator();
        menu_Huehnerverwaltung->addAction(action_Stammdaten_2);
        menu_Huehnerverwaltung->addSeparator();
        menu_Huehnerverwaltung->addAction(action_Druck);
        menu_Anderes->addAction(actionFuetterung);
        menu_Anderes->addAction(actionZucht);
        menu_Anderes->addAction(actionKrankheit);
        menu_Anderes->addAction(actionMedikamentengabe);
        menu_Anderes->addAction(actionPflege);
        menu_Anderes->addAction(actionTierarzt);
        menu_Anderes->addAction(actionSonstiges);
        menu_Anderes->addAction(menu_Sprach->menuAction());
        menu_Sprach->addAction(action_Deutsch);
        menu_Sprach->addAction(action_Chinesisch);
        menu_Sprach->addAction(action_Englisch);
        menu_Verwaltung->addAction(actionNeue_Mitarbeiter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLegeLe_istung_erfassen->setText(QCoreApplication::translate("MainWindow", "LegeLe&istung erfassen", nullptr));
        actionFuetterung->setText(QCoreApplication::translate("MainWindow", "F\303\274tterung", nullptr));
        actionZucht->setText(QCoreApplication::translate("MainWindow", "Zucht", nullptr));
        actionKrankheit->setText(QCoreApplication::translate("MainWindow", "Krankheit", nullptr));
        actionMedikamentengabe->setText(QCoreApplication::translate("MainWindow", "Medikamentengabe", nullptr));
        actionPflege->setText(QCoreApplication::translate("MainWindow", "Pflege", nullptr));
        actionTierarzt->setText(QCoreApplication::translate("MainWindow", "Tierarzt", nullptr));
        actionSonstiges->setText(QCoreApplication::translate("MainWindow", "Sonstiges", nullptr));
        actionNeue_Mitarbeiter->setText(QCoreApplication::translate("MainWindow", "Neue &Mitarbeiter", nullptr));
        action_Deutsch->setText(QCoreApplication::translate("MainWindow", "&Deutsch", nullptr));
        action_Chinesisch->setText(QCoreApplication::translate("MainWindow", "&Chinesisch", nullptr));
        action_Englisch->setText(QCoreApplication::translate("MainWindow", "&Englisch", nullptr));
        action_Stammdaten_2->setText(QCoreApplication::translate("MainWindow", "&Stammdaten", nullptr));
        action_Druck->setText(QCoreApplication::translate("MainWindow", "&Druck", nullptr));
        label_6->setText(QString());
        label_5->setText(QString());
        label_2->setText(QString());
        menu_Huehnerverwaltung->setTitle(QCoreApplication::translate("MainWindow", "&H\303\274hnerverwaltung", nullptr));
        menu_Anderes->setTitle(QCoreApplication::translate("MainWindow", "&Anderes", nullptr));
        menu_Sprach->setTitle(QCoreApplication::translate("MainWindow", "&Sprach", nullptr));
        menu_Verwaltung->setTitle(QCoreApplication::translate("MainWindow", "&Verwaltung", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
