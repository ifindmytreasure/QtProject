#include "widget.h"
#include "ui_widget.h"
#include <QTreeWidget>
#include <QTreeWidgetItem>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTreeWidget * myTreeWidget = ui->treeWidget;
    myTreeWidget->setHeaderLabels(QStringList() << "英雄姓名" << "英雄介绍");
    QTreeWidgetItem * treeItem1 = new QTreeWidgetItem(QStringList() << "力量");
    QTreeWidgetItem * treeItem2 = new QTreeWidgetItem(QStringList() << "敏捷");
    QTreeWidgetItem * treeItem3 = new QTreeWidgetItem(QStringList() << "智力");

    myTreeWidget->addTopLevelItem(treeItem1);
    myTreeWidget->addTopLevelItem(treeItem2);
    myTreeWidget->addTopLevelItem(treeItem3);
    QStringList  heroL1;
    QStringList  heroL2;
    QStringList  heroM1;
    QStringList  heroM2;
    QStringList  heroZ1;
    QStringList  heroZ2;

    heroL1 << "刚被猪" << "前排坦克，能在吸收伤害的同时造成可观的范围输出";
    heroL2 << "船长" << "前排坦克，能肉能输出能控场的全能英雄";

    heroM1 << "月骑" << "中排物理输出，可以使用分裂利刃攻击多个目标";
    heroM2 << "小鱼人" << "前排战士，擅长偷取敌人的属性来增强自身战力";

    heroZ1 << "死灵法师" << "前排法师坦克，魔法抗性较高，拥有治疗技能";
    heroZ2 << "巫医" << "后排辅助法师，可以使用奇特的巫术诅咒敌人与治疗队友";
    QTreeWidgetItem *l1 = new QTreeWidgetItem(heroL1);
    QTreeWidgetItem *l2 = new QTreeWidgetItem(heroL2);
    QTreeWidgetItem *m1 = new QTreeWidgetItem(heroM1);
    QTreeWidgetItem *m2 = new QTreeWidgetItem(heroM2);
    QTreeWidgetItem *z1 = new QTreeWidgetItem(heroZ1);
    QTreeWidgetItem *z2 = new QTreeWidgetItem(heroZ2);
   \
    treeItem1->addChild(l1);
    treeItem1->addChild(l2);
    treeItem2->addChild(m1);
    treeItem2->addChild(m2);
    treeItem3->addChild(z1);
    treeItem3->addChild(z2);
}

Widget::~Widget()
{
    delete ui;
}
