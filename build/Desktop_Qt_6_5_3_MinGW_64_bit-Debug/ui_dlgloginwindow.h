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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgLoginWindow
{
public:
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
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

    void setupUi(QDialog *DlgLoginWindow)
    {
        if (DlgLoginWindow->objectName().isEmpty())
            DlgLoginWindow->setObjectName("DlgLoginWindow");
        DlgLoginWindow->resize(1052, 763);
        label_4 = new QLabel(DlgLoginWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 40, 891, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Old English Text MT")});
        font.setPointSize(25);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(DlgLoginWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 140, 271, 221));
        label_6->setAutoFillBackground(false);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/jidan.jpg")));
        label_6->setScaledContents(true);
        label_5 = new QLabel(DlgLoginWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(734, 140, 271, 231));
        label_5->setAutoFillBackground(false);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/xiaoji.jpg")));
        label_5->setScaledContents(true);
        label_2 = new QLabel(DlgLoginWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 140, 221, 241));
        label_2->setAutoFillBackground(false);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/muji.jpg")));
        label_2->setScaledContents(true);
        widget = new QWidget(DlgLoginWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 420, 981, 221));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 0));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/login.png")));
        label->setScaledContents(true);

        horizontalLayout_5->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lblUsername = new QLabel(widget);
        lblUsername->setObjectName("lblUsername");
        QFont font1;
        font1.setPointSize(19);
        lblUsername->setFont(font1);

        horizontalLayout_2->addWidget(lblUsername);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        leUsername = new QLineEdit(widget);
        leUsername->setObjectName("leUsername");
        leUsername->setMinimumSize(QSize(186, 0));

        horizontalLayout_2->addWidget(leUsername);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lblPassword = new QLabel(widget);
        lblPassword->setObjectName("lblPassword");
        lblPassword->setFont(font1);

        horizontalLayout_3->addWidget(lblPassword);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        lePassword = new QLineEdit(widget);
        lePassword->setObjectName("lePassword");
        lePassword->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(lePassword);

        btnPwShow = new QPushButton(widget);
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

        btnAnmelden = new QPushButton(widget);
        btnAnmelden->setObjectName("btnAnmelden");
        btnAnmelden->setMinimumSize(QSize(120, 0));

        horizontalLayout_4->addWidget(btnAnmelden);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        btnAbbrechen = new QPushButton(widget);
        btnAbbrechen->setObjectName("btnAbbrechen");
        btnAbbrechen->setMinimumSize(QSize(120, 0));

        horizontalLayout_4->addWidget(btnAbbrechen);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

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
        label_4->setText(QCoreApplication::translate("DlgLoginWindow", "Willkommen in der H\303\274hnerfarm", nullptr));
        label_6->setText(QString());
        label_5->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        lblUsername->setText(QCoreApplication::translate("DlgLoginWindow", "Username", nullptr));
        lblPassword->setText(QCoreApplication::translate("DlgLoginWindow", "Password", nullptr));
        btnPwShow->setText(QString());
        btnAnmelden->setText(QCoreApplication::translate("DlgLoginWindow", "Anmelden", nullptr));
        btnAbbrechen->setText(QCoreApplication::translate("DlgLoginWindow", "Abbrechen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgLoginWindow: public Ui_DlgLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGLOGINWINDOW_H
