#include <QtGui/QApplication>
#include "pinewoodpc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pinewoodPC w;
    w.show();
    
    return a.exec();
}
