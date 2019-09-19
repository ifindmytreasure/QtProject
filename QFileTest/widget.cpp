#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QByteArray>
#include <QTextCodec>
#include <QDebug>
#include <QFileInfo>
#include <QDateTime>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
       QString path = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\XH\\Desktop");
       if(path.isEmpty()){
           QMessageBox::warning(this,"警告","打开失败");
       }else{
           ui->lineEdit->setText(path);
           QFile file(path);
           //已只读方式打开
           QTextCodec *codec = QTextCodec::codecForName("utf8");
           file.open(QIODevice::ReadOnly);
           QByteArray array = file.readAll();
           ui->textEdit->setText(codec->toUnicode(array));
           file.close();
           file.open(QFileDevice::Append);
           file.write("啊啊啊啊");
           file.close();
           QFileInfo fileInfo(path);
           qDebug() << "文件大小:" << fileInfo.size() << ",文件名称:" << fileInfo.fileName()
                    << ",文件后缀名:" << fileInfo.suffix() << ",文件所有者" <<fileInfo.owner();
           qDebug() << "文件创建时间:" << fileInfo.created().toString("yyyy-MM-dd hh:mm:ss");
           qDebug() << "文件最后一次更新时间:" << fileInfo.lastModified().toString("yyyy-MM-dd hh:mm:ss");


       }

    });
}

Widget::~Widget()
{
    delete ui;
}
