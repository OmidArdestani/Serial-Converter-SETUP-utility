#ifndef SERIALCONVERTERSETUPUTILITY_H
#define SERIALCONVERTERSETUPUTILITY_H

#include <QMainWindow>
#include <QWidget>

namespace Ui{
class SerialConverterSetupUtitlity;
};

class SerialConverterSetupUtitlity:public QMainWindow
{
    Q_OBJECT
public:
    SerialConverterSetupUtitlity();

private:
    Ui::SerialConverterSetupUtitlity* ui=nullptr;
};

#endif
