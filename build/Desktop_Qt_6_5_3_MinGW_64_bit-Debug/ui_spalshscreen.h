/********************************************************************************
** Form generated from reading UI file 'spalshscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPALSHSCREEN_H
#define UI_SPALSHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spalshScreen
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *spalshScreen)
    {
        if (spalshScreen->objectName().isEmpty())
            spalshScreen->setObjectName("spalshScreen");
        spalshScreen->resize(523, 436);
        gridLayout = new QGridLayout(spalshScreen);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(spalshScreen);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Javanese Text")});
        font.setPointSize(18);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(spalshScreen);
        label->setObjectName("label");
        label->setMaximumSize(QSize(523, 436));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Image/H\303\274hner.jpeg")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(spalshScreen);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Print")});
        font1.setPointSize(7);
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(spalshScreen);

        QMetaObject::connectSlotsByName(spalshScreen);
    } // setupUi

    void retranslateUi(QWidget *spalshScreen)
    {
        spalshScreen->setWindowTitle(QCoreApplication::translate("spalshScreen", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("spalshScreen", "H\303\274hner Manager 1.0", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("spalshScreen", "by Wenyao Wang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spalshScreen: public Ui_spalshScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPALSHSCREEN_H
