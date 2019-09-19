#include "dialoglist.h"
#include "ui_dialoglist.h"
#include <QToolButton>
#include "widget.h"
#include <QPushButton>

DiaLogList::DiaLogList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DiaLogList)
{
    ui->setupUi(this);
    setWindowTitle("MyQQ 2019");
    setWindowIcon(QIcon(":/images/qq.png"));
    QList<QString>nameList;
    nameList << "水票奇缘" << "忆梦如澜" <<"北京出版人"<<"Cherry"<<"淡然"
             <<"娇娇girl"<<"落水无痕"<<"青墨暖暖"<<"无语";
    QStringList iconNameList; //图标资源列表
    iconNameList << "spqy"<< "ymrl" <<"qq" <<"Cherry"<< "dr"
                 <<"jj"<<"lswh"<<"qmnn"<<"clear";
    QVector<QToolButton *>btnVector;
    for(int i =0;i<nameList.size();i++){
        QToolButton * btn = new QToolButton;
        btn->setText(nameList[i]);
        QString picString = QString(":/images/%1.png").arg(iconNameList[i]);
        btn->setIcon(QPixmap(picString));
        btn->setIconSize(QPixmap(picString).size());
        btn->setAutoRaise(true);
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        ui->vLayout->addWidget(btn);
        btnVector.push_back(btn);
        isShow.push_back(false);
    }
    ui->toolBox->setItemEnabled(0,false);
    for (int i = 0;i<btnVector.size();i++) {
        //窗口置顶显示
        connect(btnVector[i],&QToolButton::clicked,[=](){
            if(isShow[i]){
                return;
            }
            isShow[i]=true;
            Widget *widget = new Widget(0,btnVector[i]->text());
            widget->setWindowTitle(btnVector[i]->text());
            widget->setWindowIcon(btnVector[i]->icon());
            widget->show();
            connect(widget,&Widget::closeWidget,[=](){
              isShow[i] = false;
            });
        });
    }
}

DiaLogList::~DiaLogList()
{
    delete ui;
}
