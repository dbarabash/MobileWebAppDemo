#include "mainmodel.h"
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>

MainModel::MainModel(QtQuick2ApplicationViewer *view) {
    viewer = view;
    manager = new QNetworkAccessManager(this);
    reply = manager->get(QNetworkRequest(QUrl("http://192.168.10.101:3000")));
    connect(reply, SIGNAL(finished()),this, SLOT(getReplyFinished()));
    connect(reply, SIGNAL(readyRead()), this, SLOT(readyReadReply()));
}

MainModel::~MainModel() {
}

QString MainModel::getData() const {
    QString answer;
    if (data == NULL || data == "") {
        answer = "Answer Is Empty";
    }
    if (data == NULL) {
        answer = "Answer Is NULL";
    }
    return data;
}

void MainModel::getReplyFinished(){
    reply->deleteLater();
}

void readyRead() {

}

void MainModel::readyReadReply(){
    data = QString::fromUtf8(reply->readAll());
    emit readyRead();
}
