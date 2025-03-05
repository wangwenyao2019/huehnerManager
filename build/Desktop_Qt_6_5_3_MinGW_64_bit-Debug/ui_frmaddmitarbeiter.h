/********************************************************************************
** Form generated from reading UI file 'frmaddmitarbeiter.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMADDMITARBEITER_H
#define UI_FRMADDMITARBEITER_H

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

class Ui_FrmAddMitarbeiter
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableView *tvMitarbeiter;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnNeuMitarbeiter;
    QPushButton *btnSpeichern;
    QPushButton *btnBearbeiten;
    QPushButton *btnEntfernen;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FrmAddMitarbeiter)
    {
        if (FrmAddMitarbeiter->objectName().isEmpty())
            FrmAddMitarbeiter->setObjectName("FrmAddMitarbeiter");
        FrmAddMitarbeiter->resize(702, 527);
        gridLayout = new QGridLayout(FrmAddMitarbeiter);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(FrmAddMitarbeiter);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tvMitarbeiter = new QTableView(FrmAddMitarbeiter);
        tvMitarbeiter->setObjectName("tvMitarbeiter");

        gridLayout->addWidget(tvMitarbeiter, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnNeuMitarbeiter = new QPushButton(FrmAddMitarbeiter);
        btnNeuMitarbeiter->setObjectName("btnNeuMitarbeiter");
        btnNeuMitarbeiter->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(btnNeuMitarbeiter);

        btnSpeichern = new QPushButton(FrmAddMitarbeiter);
        btnSpeichern->setObjectName("btnSpeichern");
        btnSpeichern->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(btnSpeichern);

        btnBearbeiten = new QPushButton(FrmAddMitarbeiter);
        btnBearbeiten->setObjectName("btnBearbeiten");
        btnBearbeiten->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(btnBearbeiten);

        btnEntfernen = new QPushButton(FrmAddMitarbeiter);
        btnEntfernen->setObjectName("btnEntfernen");
        btnEntfernen->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(btnEntfernen);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(FrmAddMitarbeiter);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(FrmAddMitarbeiter);
        QObject::connect(pushButton_3, &QPushButton::clicked, FrmAddMitarbeiter, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(FrmAddMitarbeiter);
    } // setupUi

    void retranslateUi(QWidget *FrmAddMitarbeiter)
    {
        FrmAddMitarbeiter->setWindowTitle(QCoreApplication::translate("FrmAddMitarbeiter", "Form", nullptr));
        label->setText(QCoreApplication::translate("FrmAddMitarbeiter", "Mitarbeiter Verwaltung", nullptr));
        btnNeuMitarbeiter->setText(QCoreApplication::translate("FrmAddMitarbeiter", "Neu Mitarbeiter", nullptr));
        btnSpeichern->setText(QCoreApplication::translate("FrmAddMitarbeiter", "Speichern", nullptr));
        btnBearbeiten->setText(QCoreApplication::translate("FrmAddMitarbeiter", "Bearbeiten", nullptr));
        btnEntfernen->setText(QCoreApplication::translate("FrmAddMitarbeiter", "Entfernen", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FrmAddMitarbeiter", "Schlie\303\237en", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmAddMitarbeiter: public Ui_FrmAddMitarbeiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMADDMITARBEITER_H
