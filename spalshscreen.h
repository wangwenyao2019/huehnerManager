#ifndef SPALSHSCREEN_H
#define SPALSHSCREEN_H

#include <QWidget>

namespace Ui {
class spalshScreen;
}

class spalshScreen : public QWidget
{
    Q_OBJECT

public:
    explicit spalshScreen(QWidget *parent = nullptr);
    ~spalshScreen();

private:
    Ui::spalshScreen *ui;
};

#endif // SPALSHSCREEN_H
