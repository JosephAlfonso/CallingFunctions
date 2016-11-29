#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQuickItem>

#include "mycomm.h"
#include "Logindlg.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QScopedPointer<MyComm> tstCPP(new MyComm);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("methodOneCPP",tstCPP.data());

    QObject *itemOBJ = engine.rootObjects().at(0);

    LoginDLG myLoginDLG;
    QObject::connect(itemOBJ,SIGNAL(signalAccepted()),&myLoginDLG,SLOT(OKLoginButton()));


    return app.exec();
}
