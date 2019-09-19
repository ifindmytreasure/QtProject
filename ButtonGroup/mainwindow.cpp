#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCheckBox>
#include <QDebug>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->serviceReview->resize(200,100);

    connect(ui->checkBox,&QCheckBox::stateChanged,[=](int state){
       qDebug() << "state=" <<state;
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}
