#ifndef UDPTEST_H
#define UDPTEST_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class UdpTest;
}

class UdpTest : public QWidget
{
    Q_OBJECT

public:
    explicit UdpTest(QWidget *parent = nullptr);
    ~UdpTest();
    QUdpSocket * udp;

private:
    Ui::UdpTest *ui;
};

#endif // UDPTEST_H
