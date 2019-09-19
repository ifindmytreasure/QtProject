#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QPen>
#include <QPicture>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QPixmap pixMap(400,400);
//    pixMap.fill(QColor(Qt::white));
//    QPainter painter(&pixMap);
//    QPen pen((QColor(Qt::green)));
//    pen.setWidth(3);
//    painter.setPen(pen);
//    painter.drawEllipse(QPoint(150,150),100,100);
//    pixMap.save("E:/pix.png");
    //QPicture用于记录和重现QPainter指令
    QPicture picture;
    QPainter painter;
    painter.begin(&picture);
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(50,50),100,100);
    painter.end();
    picture.save("E:/pic.pic");


}
void Widget::paintEvent(QPaintEvent *){
    QPicture picture;
    picture.load("E:/pic.pic");
    QPainter painter(this);
    painter.drawPicture(100,100,picture);
}

Widget::~Widget()
{
    delete ui;
}
