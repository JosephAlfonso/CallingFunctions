#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QObject>
#include <QDebug>

class LoginDLG : public QObject
{
    Q_OBJECT
public:
    explicit LoginDLG(QObject *parent = 0);

signals:

public slots:
    Q_INVOKABLE void OKLoginButton();
};

#endif // LOGINDLG_H
