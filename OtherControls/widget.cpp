#include "widget.h"
#include "ui_widget.h"
#include <QMovie>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->scrollBtn,&QPushButton::clicked,[=](){
       ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->toolBoxBtn,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });
    connect(ui->widgetBtn,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    ui->comboBox->addItem("篮球");
    ui->comboBox->addItem("足球");
    ui->comboBox->addItem("排球");
    QMovie * movie = new QMovie(":/Image/mario.gif");
    ui->movie->setMovie(movie);
    movie->start();
}

Widget::~Widget()
{
    delete ui;
}
