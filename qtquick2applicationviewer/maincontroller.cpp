#include "maincontroller.h"

MainController::MainController(QObject *parent) :
    QObject(parent)
{
    model = new MainModel(&viewer);
    connect(model, SIGNAL(readyRead()), this, SLOT(paintView()));
}

void MainController::paintView() {
    QQmlContext *context = viewer.rootContext(); //view is the QDeclarativeView
    context->setContextProperty( "mainModel", model );
    viewer.setMainQmlFile(QStringLiteral("qml/MobileWebAppDemo/main.qml"));
    viewer.showExpanded();
}
