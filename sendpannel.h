#ifndef SENDPANNEL_H
#define SENDPANNEL_H

#include <QWidget>

namespace Ui {
class SendPannel;
}

class SendPannel : public QWidget
{
    Q_OBJECT

public:
    explicit SendPannel(QWidget *parent = nullptr);
    ~SendPannel();

private:
    Ui::SendPannel *ui;
};

#endif // SENDPANNEL_H
