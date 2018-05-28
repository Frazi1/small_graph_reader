#include "testwin.h"
#include "ui_testwin.h"

testWin::testWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::testWin)
{
    ui->setupUi(this);
}

testWin::~testWin()
{
    delete ui;
}
