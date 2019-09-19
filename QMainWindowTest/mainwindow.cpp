#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600,400);

        // 包含菜单栏 只能有一个
        QMenuBar * bar =  menuBar();
        //将菜单栏放入到窗口中
        this->setMenuBar(bar);

        //创建文件菜单
        QMenu * fileMenu =  bar->addMenu("文件");
        QMenu * editMenu =  bar->addMenu("编辑");

        //添加菜单项
        QAction * newAction =  fileMenu->addAction("新建");
        // 添加分割线
        fileMenu->addSeparator();
        QAction * openAction =  fileMenu->addAction("打开");

        //工具栏  可以有多个
        QToolBar * toolBar = new QToolBar(this);
        addToolBar(Qt::LeftToolBarArea,toolBar); //默认停靠范围

        //只允许左右侧停靠
        toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea );

        //设置浮动
        toolBar->setFloatable(false);

        //设置移动 （总开关）
        toolBar->setMovable(false);
        //工具栏添加菜单项
        toolBar->addAction(newAction);
        //添加分割线
        toolBar->addSeparator();
        toolBar->addAction(openAction);
        //添加状态栏
        QStatusBar *staBar = new QStatusBar(this);
        this->setStatusBar(staBar);
        QLabel *label = new QLabel("提示信息",this);
        staBar->addWidget(label);
        QLabel *label2 = new QLabel("右侧提示信息",this);
        staBar->addPermanentWidget(label2);

        //添加瞄接部件
        QDockWidget *dockWidget = new QDockWidget(this);
        this->addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
        dockWidget->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);
        //核心内容
        QTextEdit *txtEdit = new QTextEdit(this);
        this->setCentralWidget(txtEdit);

}

MainWindow::~MainWindow()
{

}
