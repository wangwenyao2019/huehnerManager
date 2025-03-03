#include "spalshscreen.h"
#include "ui_spalshscreen.h"

spalshScreen::spalshScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::spalshScreen)
{
    ui->setupUi(this);
}

spalshScreen::~spalshScreen()
{
    delete ui;
}
