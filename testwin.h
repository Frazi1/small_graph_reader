#ifndef TESTWIN_H
#define TESTWIN_H

#include <QMainWindow>

namespace Ui {
class testWin;
}

class testWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit testWin(QWidget *parent = 0);
    ~testWin();

private:
    Ui::testWin *ui;
};

#endif // TESTWIN_H
