#include "widget.h"
#include "ui_widget.h"
#include <QTableWidget>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTableWidget * myTableWidget = ui->tableWidget;
    QStringList headerList;
    headerList << "姓名" << "性别" << "年龄";
    myTableWidget->setColumnCount(headerList.size());
    myTableWidget->setHorizontalHeaderLabels(headerList);
    myTableWidget->setRowCount(5);
    //准备数据
    QStringList nameList;
    nameList << "亚瑟"<< "妲己"<< "安琪拉"<< "东皇太一"<< "李白";

    QList<QString> sexList;
    sexList << "男" << "女"<< "女"<< "男"<< "男";
    for (int i = 0;i < 5; i++) {
        int count = 0;
        myTableWidget->setItem(i,count++,new QTableWidgetItem(nameList.at(i)));
        myTableWidget->setItem(i,count++,new QTableWidgetItem(sexList.at(i)));
        myTableWidget->setItem(i,count++,new QTableWidgetItem(QString::number(i+18)));
    }

    connect(ui->addZY,&QPushButton::clicked,[=](){
        if(myTableWidget->findItems("赵云",Qt::MatchExactly).empty()){
            myTableWidget->insertRow(5);
            myTableWidget->setItem(5,0,new QTableWidgetItem("赵云"));
            myTableWidget->setItem(5,1,new QTableWidgetItem("男"));
            myTableWidget->setItem(5,2,new QTableWidgetItem(QString::number(23)));
        }else{
            QMessageBox::warning(this,"警告","赵云已存在");
        }
    });
    connect(ui->deleteZY,&QPushButton::clicked,[=](){
        if(!myTableWidget->findItems("赵云",Qt::MatchExactly).empty()){
            int row = myTableWidget->findItems("赵云",Qt::MatchExactly).first()->row();
            myTableWidget->removeRow(row);
        }else{
            QMessageBox::warning(this,"警告","赵云不存在");
        }
    });
}

Widget::~Widget()
{
    delete ui;
}
