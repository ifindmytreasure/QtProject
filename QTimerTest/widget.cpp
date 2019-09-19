#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDebug>
#include <QEvent>
#include <QMouseEvent>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTimer *timer1 = new QTimer(this);
    //每隔0.5秒发送一个信号
    timer1->start(500);
    connect(timer1,&QTimer::timeout,[=](){
        static int m = 0;
        ui->label->setText(QString::number(m++));
    });
    connect(ui->stopButton,&QPushButton::clicked,[=](){
        timer1->stop();
    });
    //给ui->label做事件过滤器 拦截
        //步骤1  给控件安装过滤器
        // 参数this 通过父窗口给lable安装过滤器
    ui->label_2->installEventFilter(this);
    //重写eventFilter方法
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *e)
{
    if(watched == ui->label_2){
        if(e->type() == QEvent::MouseButtonPress){
            QMouseEvent *ev = static_cast<QMouseEvent *>(e);
            QString str = QString("事件过滤器：：：鼠标按下了！！！ x = %1 y = %2").arg(ev->x()).arg(ev->y());
            qDebug()  << str;
            //鼠标按下自己做处理
            return true;
        }
    }
    //让其他父类做处理
    return QWidget::eventFilter(watched,e);
}
