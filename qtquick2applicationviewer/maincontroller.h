#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QObject>
#include <QQmlContext>
#include "mainmodel.h"

class MainController : public QObject
{
    Q_OBJECT
public:
    explicit MainController(QObject *parent = 0);

signals:

public slots:
    void paintView();

private:
    MainModel *model;
    QtQuick2ApplicationViewer viewer;
};

#endif // MAINCONTROLLER_H
