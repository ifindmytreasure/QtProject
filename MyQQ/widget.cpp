#include "widget.h"
#include "ui_widget.h"
#include <QDataStream>
#include <QMessageBox>
#include <QDateTime>
#include <QKeyEvent>
#include <QDebug>
#include <QComboBox>
#include <QToolButton>
#include <QColorDialog>
#include <QFile>
#include <QFileDialog>

Widget::Widget(QWidget *parent,QString name) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);
    this->uName = name;
    this->port = 9999;
    //绑定模式，共享地址和断线重连
    udpSocket->bind(port,QUdpSocket::ShareAddress|QUdpSocket::ReuseAddressHint);
    //发送消息
    sndMsg(UsrEnter);
    connect(ui->sendBtn,&QPushButton::clicked,[=](){
       sndMsg(Msg);
    });
    connect(this,&Widget::keyBoardEnter,[=](){
        sndMsg(Msg);
    });
    //sndMsg(UsrExit)
    //监听别人发送的数据
    connect(udpSocket,&QUdpSocket::readyRead,this,&Widget::receiveMessage);
    //点退出按钮触发打槽
    connect(ui->exitBtn,&QPushButton::clicked,[=](){
        //close方法是QWidget的槽函数
       this->close();
    });


    //辅助功能
    connect(ui->fontComboBox,&QFontComboBox::currentFontChanged,[=](const QFont &font){
        ui->msgTxtEdit->setFont(font);
        ui->msgTxtEdit->setFocus();
    });
    //字体大小
    void (QComboBox::*fontSizeChange)(const QString &text) = &QComboBox::currentIndexChanged;
    connect(ui->fontSizeComBox,fontSizeChange,[=](const QString &text){
        ui->msgTxtEdit->setFontPointSize(text.toDouble());
        ui->msgTxtEdit->setFocus();
    });
    //加粗
       connect(ui->boldBtn,&QToolButton::clicked,[=](bool isCheck){
           if(isCheck)
           {
               ui->msgTxtEdit->setFontWeight(QFont::Bold);
           }
           else
           {
               ui->msgTxtEdit->setFontWeight(QFont::Normal);
           }
       });

       //倾斜
       connect(ui->italicBtn,&QToolButton::clicked,[=](bool check){

           ui->msgTxtEdit->setFontItalic(check);
       });

       //下划线
       connect(ui->underlineBtn,&QToolButton::clicked,[=](bool check){
           ui->msgTxtEdit->setFontUnderline(check);
       });

       //字体颜色
       connect(ui->colorBtn,&QToolButton::clicked,[=](){
           QColor color = QColorDialog::getColor(Qt::red);
           ui->msgTxtEdit->setTextColor(color);

       });

       //清空聊天记录
       connect(ui->clearBtn,&QToolButton::clicked,[=](){
           ui->msgBrowser->clear();
       });
       //保存记录
       connect(ui->saveBtn,&QToolButton::clicked,[=](){
           if(ui->msgBrowser->toPlainText().isEmpty()){
               QMessageBox::warning(this,"警告","内容不能为空");
               return;
           }else{
               QString path = QFileDialog::getSaveFileName(this,"保存聊天记录","聊天记录","(*.txt)");
               QFile file(path);
               file.open(QIODevice::WriteOnly | QIODevice::Text);
               QTextStream stream(&file);
               stream << ui->msgBrowser->toPlainText();
               file.close();
           }
       });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *e)
{
    emit this->closeWidget();
    sndMsg(UsrLeft);
    //用户退出断开socket并摧毁
    udpSocket->close();
    udpSocket->destroyed();
    //还有其他需要断开的事件交给QWidget处理
    QWidget::closeEvent(e);
}

void Widget::sndMsg(Widget::MsgType type)
{
    //发送消息分为3种类型 通过数据流进行分段处理
    QByteArray array;
    QDataStream stream(&array,QIODevice::WriteOnly);
    stream << type  << getUsr();
    switch (type) {
        case Msg:
        if(ui->msgTxtEdit->toPlainText() ==""){
            QMessageBox::warning(this,"警告","发送消息内容不能为空");
            return ;
        }
        stream << getMsg();
        break;
    case UsrEnter:
        break;
    case UsrLeft:

        break;
    default:
        break;
    }
    udpSocket->writeDatagram(array,QHostAddress::Broadcast,port);
}

void Widget::usrEnter(QString username)
{
    bool isEmpty = ui->userTabWidget->findItems(username,Qt::MatchExactly).isEmpty();
    if(isEmpty){
        QTableWidgetItem *usr = new QTableWidgetItem(username);
        qDebug() << "用户名" << usr->text();
        ui->userTabWidget->insertRow(0);
        ui->userTabWidget->setItem(0,0,new QTableWidgetItem(username));
        ui->msgBrowser->setTextColor(Qt::gray);
        ui->msgBrowser->append(QString("%1 上线了!").arg(username));
        ui->userNumLabel->setText(QString("在线人数:%1人").arg(ui->userTabWidget->rowCount()));
       //自己进入也需要发送上线信息
        sndMsg(UsrEnter);
    }
}

void Widget::usrLeft(QString usrname, QString time)
{
    bool isEmpty = ui->userTabWidget->findItems(usrname,Qt::MatchExactly).isEmpty();
    if(!isEmpty){
        int row = ui->userTabWidget->findItems(usrname,Qt::MatchExactly).first()->row();
        ui->userTabWidget->removeRow(row);
        ui->msgBrowser->setTextColor(Qt::gray);
        ui->msgBrowser->append(QString("%1于%2离开").arg(usrname,time));
        ui->userNumLabel->setText(QString("在线人数:%1人").arg(ui->userTabWidget->rowCount()));
    }
}

QString Widget::getUsr()
{
    return this->uName;
}

QString Widget::getMsg()
{
   QString str = ui->msgTxtEdit->toHtml();
   ui->msgTxtEdit->clear();
   ui->msgTxtEdit->setFocus();
   return str;
}

//接收数据
void Widget::receiveMessage()
{
    qint64 size = udpSocket->pendingDatagramSize();
    QByteArray array = QByteArray(size,0);
    udpSocket->readDatagram(array.data(),size);
    QDataStream stream(&array,QIODevice::ReadOnly);
    //对数据做处理
    int msgType;
    QString userName;
    QString message;
    //将流中的枚举类型写入到msgType,枚举类型可以隐式转换成int类型
    stream >> msgType;
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    switch (msgType) {
    case Msg:
        stream >> userName >> message;
        //向聊天记录textBrowser中追加内容
        ui->msgBrowser->setTextColor(Qt::blue);
        ui->msgBrowser->append("[" + userName + "]" +time);
        ui->msgBrowser->append(message);
        break;
    case UsrEnter:
        stream >> userName;
        usrEnter(userName);
        break;
    case UsrLeft:
        stream >> userName;
        usrLeft(userName,time);
        break;
    default:
        break;
    }
}
void Widget::keyPressEvent(QKeyEvent *event) {
    if(event->key() ==Qt::Key_Enter ||event->key() == Qt::Key_Return){
        emit this->keyBoardEnter();

    }
}


