#ifndef GRAPHMANAGER_H
#define GRAPHMANAGER_H

#include <QObject>

class GraphManager
{
public:
    GraphManager();
    static QString FindConnectedComponents(QString str);
};

#endif // GRAPHMANAGER_H
