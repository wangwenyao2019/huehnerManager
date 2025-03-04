/********************************************************************************
** Form generated from reading UI file 'frmstammdaten.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMSTAMMDATEN_H
#define UI_FRMSTAMMDATEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmStammdaten
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTableView *tvStammdaten;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnNeu_2;
    QPushButton *btnEntfernen_2;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnAbbrechen_2;
    QPushButton *btnSpeichern_2;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnSchliessen;

    void setupUi(QWidget *FrmStammdaten)
    {
        if (FrmStammdaten->objectName().isEmpty())
            FrmStammdaten->setObjectName("FrmStammdaten");
        FrmStammdaten->resize(1064, 790);
        gridLayout = new QGridLayout(FrmStammdaten);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(FrmStammdaten);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell Nova")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(1043, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        tvStammdaten = new QTableView(FrmStammdaten);
        tvStammdaten->setObjectName("tvStammdaten");

        gridLayout->addWidget(tvStammdaten, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(1043, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnNeu_2 = new QPushButton(FrmStammdaten);
        btnNeu_2->setObjectName("btnNeu_2");

        horizontalLayout_4->addWidget(btnNeu_2);

        btnEntfernen_2 = new QPushButton(FrmStammdaten);
        btnEntfernen_2->setObjectName("btnEntfernen_2");

        horizontalLayout_4->addWidget(btnEntfernen_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btnAbbrechen_2 = new QPushButton(FrmStammdaten);
        btnAbbrechen_2->setObjectName("btnAbbrechen_2");

        horizontalLayout_5->addWidget(btnAbbrechen_2);

        btnSpeichern_2 = new QPushButton(FrmStammdaten);
        btnSpeichern_2->setObjectName("btnSpeichern_2");

        horizontalLayout_5->addWidget(btnSpeichern_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        btnSchliessen = new QPushButton(FrmStammdaten);
        btnSchliessen->setObjectName("btnSchliessen");

        horizontalLayout_6->addWidget(btnSchliessen);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);


        retranslateUi(FrmStammdaten);
        QObject::connect(btnSchliessen, &QPushButton::clicked, FrmStammdaten, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(FrmStammdaten);
    } // setupUi

    void retranslateUi(QWidget *FrmStammdaten)
    {
        FrmStammdaten->setWindowTitle(QCoreApplication::translate("FrmStammdaten", "Form", nullptr));
        label->setText(QCoreApplication::translate("FrmStammdaten", "Daten von H\303\274hner", nullptr));
        btnNeu_2->setText(QCoreApplication::translate("FrmStammdaten", "Neu", nullptr));
        btnEntfernen_2->setText(QCoreApplication::translate("FrmStammdaten", "Entfernen", nullptr));
        btnAbbrechen_2->setText(QCoreApplication::translate("FrmStammdaten", "Abbrechen", nullptr));
        btnSpeichern_2->setText(QCoreApplication::translate("FrmStammdaten", "Speichern", nullptr));
        btnSchliessen->setText(QCoreApplication::translate("FrmStammdaten", "Schlie\303\237en", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmStammdaten: public Ui_FrmStammdaten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMSTAMMDATEN_H
