#include "SerialConverterSetupUtitlity.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SerialConverterSetupUtitlity w;
    w.show();
    return a.exec();
}
