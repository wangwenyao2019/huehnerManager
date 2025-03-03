#include "spalshscreen.h"
#include "ui_spalshscreen.h"

spalshScreen::spalshScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::spalshScreen)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);
}

spalshScreen::~spalshScreen()
{
    delete ui;
}
