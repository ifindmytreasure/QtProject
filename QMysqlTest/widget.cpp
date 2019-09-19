#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QSqlError>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connectMysql();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::connectMysql()
{
    if(QSqlDatabase::contains("阿里云")){
        database = QSqlDatabase::database("o2o");
    }
    else //未连接则新建数据库连接
        {
            database=QSqlDatabase::addDatabase("QMYSQL","testConnect");//创建数据库连接，并为其命名testConnect
            database.setHostName("47.101.189.10");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
            database.setPort(3306);                 //连接数据库端口号，与设置一致
            database.setUserName("work");          //数据库用户名，与设置一致
            database.setPassword("Zhaodong123..");    //数据库密码，与设置一致
        }
    if(database.open())
        {
            qDebug()<<"fail to connect mysql:"<<database.lastError().text();
            return;
        }
}

void Widget::createDB()
{

}

void Widget::initDB()
{

}
