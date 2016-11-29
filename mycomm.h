#ifndef MYCOMM_H
#define MYCOMM_H

#include <QObject>
#include <QDebug>

class MyComm : public QObject
{
    Q_OBJECT
public:
    explicit MyComm(QObject *parent = 0);

    Q_INVOKABLE void test();
};

#endif // MYCOMM_H
