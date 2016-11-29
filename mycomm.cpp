#include "mycomm.h"


MyComm::MyComm(QObject *parent) : QObject(parent)
{

}
void MyComm::test()
{
    qDebug() << "Hello from CPP";
}
