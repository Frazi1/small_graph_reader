#include "graphsubwindow.h"
#include "ui_graphsubwindow.h"
#include "graphmanager.h"

#include <QMdiSubWindow>

GraphSubWindow::GraphSubWindow(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::GraphSubWindow)
{
    ui->setupUi(this);
    setWidget(ui->widget);
}

GraphSubWindow::~GraphSubWindow()
{
    delete ui;
}

void GraphSubWindow::Proceed(){
    ui->outputTextEdit->clear();
    ui->outputTextEdit
            ->setPlainText(
                GraphManager::FindConnectedComponents(
                    ui->inputTextEdit->toPlainText()));

}
