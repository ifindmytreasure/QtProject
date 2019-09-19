#include "widget.h"
#include "ui_widget.h"
#include <QListWidget>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QListWidgetItem * item = new QListWidgetItem("锄禾日当午");
    item->setTextAlignment(Qt::AlignHCenter);

    ui->listWidget->addItem(item);
    //QList<String>
    QStringList stringList;
    stringList << "锄禾日当午" << "汗滴禾下土" << "谁之盘中餐" << "粒粒皆辛苦";

    ui->listWidget->addItems(stringList);

}

Widget::~Widget()
{
    delete ui;
}
