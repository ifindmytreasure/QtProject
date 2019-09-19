#ifndef WIDGET_H
#define WIDGET_H

#include <QUdpSocket>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
     enum MsgType{Msg,UsrEnter,UsrLeft};
signals:
    void closeWidget();
    void keyBoardEnter();

public:
    explicit Widget(QWidget *parent,QString name);
    ~Widget();
    void closeEvent(QCloseEvent *);

private:
    Ui::Widget *ui;
public:
   void sndMsg(MsgType type); //广播UDP消息
   void usrEnter(QString username);//处理新用户加入
   void usrLeft(QString usrname,QString time); //处理用户离开
   QString getUsr(); //获取用户名
   QString getMsg(); //获取聊天信息
   void keyPressEvent(QKeyEvent *event);
private:
   QUdpSocket * udpSocket; //udp套接字
   qint16 port; //端口
   QString uName; //用户名

  void receiveMessage();   //接受UDP消息
};

#endif // WIDGET_H
