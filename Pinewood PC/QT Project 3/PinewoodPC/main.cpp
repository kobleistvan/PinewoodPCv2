#include <QtGui/QApplication>
#include "pinewoodpc.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PinewoodPC w;
    w.show();
    return a.exec();
}
