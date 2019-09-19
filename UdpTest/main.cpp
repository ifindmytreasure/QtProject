#include "udptest.h"
#include <QApplication>
#include <udp2.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UdpTest w;
    Udp2 udp2;
    w.show();
    udp2.show();

    return a.exec();
}
