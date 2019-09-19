#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>
#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->actionnew->setIcon(QIcon(":/img/Image/LuffyQ.png"));
    //点击弹出对话框
    connect(ui->actionnew,&QAction::triggered,this,[=](){
        //模态对话框
//        QDialog *dialog = new QDialog(this);
//        dialog->resize(200,100);
//        dialog->exec();//阻塞
//        qDebug() << "对话框" << endl;
    //非模态对话框
//    QDialog *dialog = new QDialog(this);//开辟到栈上，lambda表达式执行完对话框会被销毁
//    dialog->resize(200,100);
//    dialog->show();
//    dialog->setAttribute(Qt::WA_DeleteOnClose);//对话框被关闭的时候就会被销毁，防止内存泄漏
        //标准对话框
//    QMessageBox::information(this,"信息","info");
//        if(QMessageBox::Save == QMessageBox::question(this,"问题","question",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Save)){
//            qDebug() << "保存";
//        }
//        else{
//            qDebug() << "取消";
//        }
        //颜色对话框
//        QColor color = QColorDialog::getColor(QColor(255,0,0));
//        qDebug() << color.red() << color.green() << color.blue();
        QString filePath = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\XH\\Desktop","(*.txt *.png)");
        qDebug() << "文件路径是：" << filePath;
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
