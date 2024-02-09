#ifndef RECEIVESENDPANNEL_H
#define RECEIVESENDPANNEL_H

#include <QWidget>

namespace Ui {
class ReceiveSendPannel;
}

class ReceiveSendPannel : public QWidget
{
    Q_OBJECT

public:
    explicit ReceiveSendPannel(QWidget *parent = nullptr);
    ~ReceiveSendPannel();

private:
    Ui::ReceiveSendPannel *ui;
};

#endif // RECEIVESENDPANNEL_H
