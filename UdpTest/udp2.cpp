#include "udp2.h"
#include "ui_udp2.h"

Udp2::Udp2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Udp2)
{
    ui->setupUi(this);
    udp2 = new QUdpSocket(this);
    ui->myPort->setText("9999");
    ui->toPort->setText("8888");
    ui->toIP->setText("127.0.0.1");
    udp2->bind(ui->myPort->text().toInt());
    connect(ui->sendMsg,&QPushButton::clicked,[=](){
        //书写并发送报文
        udp2->writeDatagram(ui->message->toPlainText().toUtf8(),QHostAddress(ui->toIP->text()),ui->toPort->text().toInt());
       //同步聊天记录
        ui->record->append("mySay:"+ui->message->toPlainText());
        //清空输入框
        ui->message->clear();
    });
    //接受数据
    connect(udp2,&QUdpSocket::readyRead,[=](){
        //获取报文的长度
       qint64 size = udp2->pendingDatagramSize();
       QByteArray array = QByteArray(size,1);
       udp2->readDatagram(array.data(),size);
       ui->record->append(array.data());
    });
}

Udp2::~Udp2()
{
    delete ui;
}
