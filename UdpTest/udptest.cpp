#include "udptest.h"
#include "ui_udptest.h"
#include <QPushButton>
#include <QUdpSocket>

UdpTest::UdpTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UdpTest)
{
    ui->setupUi(this);
    udp = new QUdpSocket(this);
    ui->myPort->setText("8888");
    ui->toPort->setText("9999");
    ui->toIP->setText("127.0.0.1");
    udp->bind(ui->myPort->text().toInt());
    connect(ui->sendMsg,&QPushButton::clicked,[=](){
        //书写并发送报文
        udp->writeDatagram(ui->message->toPlainText().toUtf8(),QHostAddress(ui->toIP->text()),ui->toPort->text().toInt());
       //同步聊天记录
        ui->record->append("mySay:"+ui->message->toPlainText());
        //清空输入框
        ui->message->clear();
    });
    //接受数据
    connect(udp,&QUdpSocket::readyRead,[=](){
        //获取报文的长度
       qint64 size = udp->pendingDatagramSize();
       QByteArray array = QByteArray(size,1);
       udp->readDatagram(array.data(),size);
       ui->record->append(array.data());
    });
}

UdpTest::~UdpTest()
{
    delete ui;
}
