#include "sendpannel.h"
#include "ui_sendpannel.h"

SendPannel::SendPannel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SendPannel)
{
    ui->setupUi(this);
}

SendPannel::~SendPannel()
{
    delete ui;
}
