/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *serviceReview;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 298);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        serviceReview = new QGroupBox(centralWidget);
        serviceReview->setObjectName(QStringLiteral("serviceReview"));
        serviceReview->setEnabled(true);
        serviceReview->setMinimumSize(QSize(382, 0));
        horizontalLayout = new QHBoxLayout(serviceReview);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox_4 = new QCheckBox(serviceReview);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        horizontalLayout->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(serviceReview);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(serviceReview);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox = new QCheckBox(serviceReview);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout_2->addWidget(serviceReview);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        serviceReview->setTitle(QApplication::translate("MainWindow", "\350\257\204\344\273\267", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "\345\221\263\351\201\223\345\245\275", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "\347\216\257\345\242\203\345\245\275", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\217\234\345\223\201\345\205\250", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\245\275", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
