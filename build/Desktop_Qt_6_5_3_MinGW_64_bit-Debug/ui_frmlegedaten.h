/********************************************************************************
** Form generated from reading UI file 'frmlegedaten.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLEGEDATEN_H
#define UI_FRMLEGEDATEN_H

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

class Ui_Frmlegedaten
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTableView *tvLegedaten;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNeu;
    QPushButton *btnSpeichern;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnLegestarten;
    QPushButton *btnLegeSchliessen;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnClose;

    void setupUi(QWidget *Frmlegedaten)
    {
        if (Frmlegedaten->objectName().isEmpty())
            Frmlegedaten->setObjectName("Frmlegedaten");
        Frmlegedaten->resize(786, 537);
        gridLayout = new QGridLayout(Frmlegedaten);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Frmlegedaten);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(765, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 2, 2);

        tvLegedaten = new QTableView(Frmlegedaten);
        tvLegedaten->setObjectName("tvLegedaten");

        gridLayout->addWidget(tvLegedaten, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnNeu = new QPushButton(Frmlegedaten);
        btnNeu->setObjectName("btnNeu");
        btnNeu->setMinimumSize(QSize(147, 0));

        horizontalLayout->addWidget(btnNeu);

        btnSpeichern = new QPushButton(Frmlegedaten);
        btnSpeichern->setObjectName("btnSpeichern");
        btnSpeichern->setMinimumSize(QSize(147, 0));

        horizontalLayout->addWidget(btnSpeichern);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnLegestarten = new QPushButton(Frmlegedaten);
        btnLegestarten->setObjectName("btnLegestarten");
        btnLegestarten->setMinimumSize(QSize(147, 0));

        horizontalLayout_3->addWidget(btnLegestarten);

        btnLegeSchliessen = new QPushButton(Frmlegedaten);
        btnLegeSchliessen->setObjectName("btnLegeSchliessen");

        horizontalLayout_3->addWidget(btnLegeSchliessen);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnClose = new QPushButton(Frmlegedaten);
        btnClose->setObjectName("btnClose");

        horizontalLayout_2->addWidget(btnClose);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);


        retranslateUi(Frmlegedaten);
        QObject::connect(btnClose, &QPushButton::clicked, Frmlegedaten, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Frmlegedaten);
    } // setupUi

    void retranslateUi(QWidget *Frmlegedaten)
    {
        Frmlegedaten->setWindowTitle(QCoreApplication::translate("Frmlegedaten", "Form", nullptr));
        label->setText(QCoreApplication::translate("Frmlegedaten", "Legedaten", nullptr));
        btnNeu->setText(QCoreApplication::translate("Frmlegedaten", "Neu", nullptr));
        btnSpeichern->setText(QCoreApplication::translate("Frmlegedaten", "Speichern", nullptr));
        btnLegestarten->setText(QCoreApplication::translate("Frmlegedaten", "Legemessung starten", nullptr));
        btnLegeSchliessen->setText(QCoreApplication::translate("Frmlegedaten", "Legemessung abschlie\303\237en", nullptr));
        btnClose->setText(QCoreApplication::translate("Frmlegedaten", "Schlie\303\237en", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Frmlegedaten: public Ui_Frmlegedaten {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLEGEDATEN_H
