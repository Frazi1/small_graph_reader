#ifndef GRAPHSUBWINDOW_H
#define GRAPHSUBWINDOW_H

#include <QWidget>
#include <QMdiSubWindow>

namespace Ui {
class GraphSubWindow;
}

class GraphSubWindow : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit GraphSubWindow(QWidget *parent = 0);
    ~GraphSubWindow();

private slots:
    void Proceed();

private:
    Ui::GraphSubWindow *ui;


};

#endif // GRAPHSUBWINDOW_H
