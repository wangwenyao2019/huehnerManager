/********************************************************************************
** Form generated from reading UI file 'dlgstammdaten.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSTAMMDATEN_H
#define UI_DLGSTAMMDATEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DlgStammdaten
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTableView *tvStammdaten;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNeu;
    QPushButton *btnBearbeiten;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnSpeichern;
    QPushButton *btnAbbrechen;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnScliessen;

    void setupUi(QDialog *DlgStammdaten)
    {
        if (DlgStammdaten->objectName().isEmpty())
            DlgStammdaten->setObjectName("DlgStammdaten");
        DlgStammdaten->resize(876, 660);
        gridLayout = new QGridLayout(DlgStammdaten);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(DlgStammdaten);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Nova")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(855, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        tvStammdaten = new QTableView(DlgStammdaten);
        tvStammdaten->setObjectName("tvStammdaten");

        gridLayout->addWidget(tvStammdaten, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(855, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnNeu = new QPushButton(DlgStammdaten);
        btnNeu->setObjectName("btnNeu");

        horizontalLayout->addWidget(btnNeu);

        btnBearbeiten = new QPushButton(DlgStammdaten);
        btnBearbeiten->setObjectName("btnBearbeiten");

        horizontalLayout->addWidget(btnBearbeiten);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnSpeichern = new QPushButton(DlgStammdaten);
        btnSpeichern->setObjectName("btnSpeichern");

        horizontalLayout_2->addWidget(btnSpeichern);

        btnAbbrechen = new QPushButton(DlgStammdaten);
        btnAbbrechen->setObjectName("btnAbbrechen");

        horizontalLayout_2->addWidget(btnAbbrechen);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        btnScliessen = new QPushButton(DlgStammdaten);
        btnScliessen->setObjectName("btnScliessen");

        horizontalLayout_3->addWidget(btnScliessen);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 1);


        retranslateUi(DlgStammdaten);
        QObject::connect(btnScliessen, &QPushButton::clicked, DlgStammdaten, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(DlgStammdaten);
    } // setupUi

    void retranslateUi(QDialog *DlgStammdaten)
    {
        DlgStammdaten->setWindowTitle(QCoreApplication::translate("DlgStammdaten", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DlgStammdaten", "Daten von H\303\274hner", nullptr));
        btnNeu->setText(QCoreApplication::translate("DlgStammdaten", "Neu", nullptr));
        btnBearbeiten->setText(QCoreApplication::translate("DlgStammdaten", "Bearbeiten", nullptr));
        btnSpeichern->setText(QCoreApplication::translate("DlgStammdaten", "Speichern", nullptr));
        btnAbbrechen->setText(QCoreApplication::translate("DlgStammdaten", "Abbrechen", nullptr));
        btnScliessen->setText(QCoreApplication::translate("DlgStammdaten", "Schlie\303\237en", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgStammdaten: public Ui_DlgStammdaten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSTAMMDATEN_H
