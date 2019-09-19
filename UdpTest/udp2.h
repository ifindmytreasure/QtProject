#ifndef UDP2_H
#define UDP2_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class Udp2;
}

class Udp2 : public QWidget
{
    Q_OBJECT

public:
    explicit Udp2(QWidget *parent = nullptr);
    ~Udp2();
    QUdpSocket *udp2;
private:
    Ui::Udp2 *ui;
};

#endif // UDP2_H
