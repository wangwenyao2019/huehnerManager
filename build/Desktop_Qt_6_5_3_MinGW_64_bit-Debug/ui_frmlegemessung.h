/********************************************************************************
** Form generated from reading UI file 'frmlegemessung.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLEGEMESSUNG_H
#define UI_FRMLEGEMESSUNG_H

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

class Ui_FrmLegemessung
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *FrmLegemessung)
    {
        if (FrmLegemessung->objectName().isEmpty())
            FrmLegemessung->setObjectName("FrmLegemessung");
        FrmLegemessung->resize(956, 622);
        gridLayout = new QGridLayout(FrmLegemessung);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(FrmLegemessung);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(935, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        tableView = new QTableView(FrmLegemessung);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(FrmLegemessung);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(FrmLegemessung);
        QObject::connect(pushButton, &QPushButton::clicked, FrmLegemessung, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(FrmLegemessung);
    } // setupUi

    void retranslateUi(QWidget *FrmLegemessung)
    {
        FrmLegemessung->setWindowTitle(QCoreApplication::translate("FrmLegemessung", "Form", nullptr));
        label->setText(QCoreApplication::translate("FrmLegemessung", "Legemessung", nullptr));
        pushButton->setText(QCoreApplication::translate("FrmLegemessung", "Schlie\303\237en", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmLegemessung: public Ui_FrmLegemessung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLEGEMESSUNG_H
