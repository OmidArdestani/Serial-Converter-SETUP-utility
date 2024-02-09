#include "receivesendpannel.h"
#include "ui_receivesendpannel.h"

ReceiveSendPannel::ReceiveSendPannel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReceiveSendPannel)
{
    ui->setupUi(this);
}

ReceiveSendPannel::~ReceiveSendPannel()
{
    delete ui;
}
