/********************************************************************************
** Form generated from reading UI file 'dlgloginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGLOGINWINDOW_H
#define UI_DLGLOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DlgLoginWindow
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblUsername;
    QSpacerItem *horizontalSpacer;
    QLineEdit *leUsername;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblPassword;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lePassword;
    QPushButton *btnPwShow;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnAnmelden;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnAbbrechen;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_13;

    void setupUi(QDialog *DlgLoginWindow)
    {
        if (DlgLoginWindow->objectName().isEmpty())
            DlgLoginWindow->setObjectName("DlgLoginWindow");
        DlgLoginWindow->resize(629, 487);
        gridLayout = new QGridLayout(DlgLoginWindow);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label = new QLabel(DlgLoginWindow);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 0));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/icon/conference.png")));
        label->setScaledContents(true);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lblUsername = new QLabel(DlgLoginWindow);
        lblUsername->setObjectName("lblUsername");
        lblUsername->setMinimumSize(QSize(120, 0));
        QFont font;
        font.setPointSize(19);
        lblUsername->setFont(font);

        horizontalLayout_2->addWidget(lblUsername);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        leUsername = new QLineEdit(DlgLoginWindow);
        leUsername->setObjectName("leUsername");
        leUsername->setMinimumSize(QSize(182, 0));
        leUsername->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(leUsername);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lblPassword = new QLabel(DlgLoginWindow);
        lblPassword->setObjectName("lblPassword");
        lblPassword->setMinimumSize(QSize(120, 0));
        lblPassword->setFont(font);

        horizontalLayout_3->addWidget(lblPassword);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        lePassword = new QLineEdit(DlgLoginWindow);
        lePassword->setObjectName("lePassword");
        lePassword->setMinimumSize(QSize(150, 0));
        lePassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lePassword);

        btnPwShow = new QPushButton(DlgLoginWindow);
        btnPwShow->setObjectName("btnPwShow");

        horizontalLayout->addWidget(btnPwShow);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        btnAnmelden = new QPushButton(DlgLoginWindow);
        btnAnmelden->setObjectName("btnAnmelden");
        btnAnmelden->setMinimumSize(QSize(132, 0));

        horizontalLayout_4->addWidget(btnAnmelden);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        btnAbbrechen = new QPushButton(DlgLoginWindow);
        btnAbbrechen->setObjectName("btnAbbrechen");
        btnAbbrechen->setMinimumSize(QSize(132, 0));

        horizontalLayout_4->addWidget(btnAbbrechen);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        label_4 = new QLabel(DlgLoginWindow);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Old English Text MT")});
        font1.setPointSize(25);
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        lblUsername->setBuddy(leUsername);
        lblPassword->setBuddy(lePassword);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DlgLoginWindow);

        QMetaObject::connectSlotsByName(DlgLoginWindow);
    } // setupUi

    void retranslateUi(QDialog *DlgLoginWindow)
    {
        DlgLoginWindow->setWindowTitle(QCoreApplication::translate("DlgLoginWindow", "Dialog", nullptr));
        label->setText(QString());
        lblUsername->setText(QCoreApplication::translate("DlgLoginWindow", "Username", nullptr));
        lblPassword->setText(QCoreApplication::translate("DlgLoginWindow", "Password", nullptr));
        btnPwShow->setText(QString());
        btnAnmelden->setText(QCoreApplication::translate("DlgLoginWindow", "Anmelden", nullptr));
        btnAbbrechen->setText(QCoreApplication::translate("DlgLoginWindow", "Abbrechen", nullptr));
        label_4->setText(QCoreApplication::translate("DlgLoginWindow", "Willkommen in der H\303\274hnerfarm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgLoginWindow: public Ui_DlgLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGLOGINWINDOW_H
