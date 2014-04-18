#ifndef MAINMODEL_H
#define MAINMODEL_H

#include <QAbstractItemModel>
#include <QNetworkAccessManager>
#include "qtquick2applicationviewer.h"
#include <QString>

class MainModel : public QObject
{
    Q_OBJECT
public:
    MainModel(QtQuick2ApplicationViewer *viewer);
    ~MainModel();

    Q_INVOKABLE QString getData() const;

signals:
    void readyRead();

public slots:
    void getReplyFinished();
    void readyReadReply();
private:
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QtQuick2ApplicationViewer *viewer;
    QString data;
};

#endif // MAINMODEL_H
