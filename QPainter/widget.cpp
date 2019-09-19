#include "widget.h"
#include "ui_widget.h"

#include <QPainter>
#include <QPoint>
#include <QTimer>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    posX = 10;
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        posX+=10;
        update();
    });
    QTimer *timer1 = new QTimer(this);
    timer1->start(500);
    connect(timer1,&QTimer::timeout,[=](){
        posX+=10;
        update();
    });
}

Widget::~Widget()
{
    delete ui;
}
//程序开始运行的时候会调用
void Widget::paintEvent(QPaintEvent *)
{
    QPainter *painter = new QPainter(this);
    if(posX >= this->width()){
        posX=10;
    }
    painter->drawPixmap(posX,100,QPixmap(":/Image/OnePiece.png"));
//    painter->drawEllipse(QPoint(50,50),50,50);
//    painter->setRenderHint(QPainter::Antialiasing);
//    painter->drawEllipse(QPoint(100,100),50,50);
//    QPen pen;
//    pen.setColor(QColor(255,0,0));
//    pen.setWidth(3);
//    pen.setStyle(Qt::DotLine);
//    painter->setPen(pen);
//    QBrush brush(Qt::darkBlue);
//    painter->setBrush(brush);
//    //画线
//    painter->drawLine(QPoint(0,0),QPoint(50,50));
//    painter->drawEllipse(QPoint(80,80),50,30);
//    painter->drawRect(QRect(100,100,40,40));
}
