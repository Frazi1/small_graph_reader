#include "mainwindow.h"
#include "graphsubwindow.h"
#include "ui_mainwindow.h"
#include "testwin.h"

#include <QtCore>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mdiArea->setViewMode(QMdiArea::TabbedView);
//    QFile q = new QFile("file.txt");
//    QTextStream stream(q);
//    QString line;
//    while (stream.readLineInto(&line)) {
//         ...
//    }

//    QFile* qHell = new QFile("hello.txt");
//    qHell->open(QFile::WriteOnly);
//    QTextStream ts(qHell);
//    ts << "Hello!";
//    qHell->close();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnOpenClick() {
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
}

void MainWindow::OnNewClick(){
    //GraphSubWindow

    GraphSubWindow *subWindow = new GraphSubWindow(ui->mdiArea);
    subWindow->setAttribute(Qt::WA_DeleteOnClose);

    subWindow->setWindowTitle("title");
    subWindow->show();
}
