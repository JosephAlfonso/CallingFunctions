#include "Logindlg.h"

LoginDLG::LoginDLG(QObject *parent) : QObject(parent)
{

}
void LoginDLG::OKLoginButton() {
    qDebug() << "Ok Button Clicked";
}
