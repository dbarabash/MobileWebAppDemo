#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include "maincontroller.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    MainController *controller = new MainController;

    return app.exec();
}
