/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *page_6;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QWidget *page_3;
    QPushButton *scrollBtn;
    QPushButton *toolBoxBtn;
    QPushButton *widgetBtn;
    QComboBox *comboBox;
    QLabel *movie;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(520, 300);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(9, 9, 174, 60));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        scrollArea = new QScrollArea(page_4);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(40, 10, 121, 191));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 102, 244));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_2 = new QVBoxLayout(page_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(page_5);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        toolBox = new QToolBox(page_6);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(20, 20, 69, 121));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 69, 43));
        toolBox->addItem(page, QString::fromUtf8(" \345\256\266\344\272\272"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 69, 43));
        toolBox->addItem(page_2, QString::fromUtf8("\346\234\213\345\217\213"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        toolBox->addItem(page_3, QString::fromUtf8("  \345\220\214\345\255\246"));
        stackedWidget->addWidget(page_6);
        scrollBtn = new QPushButton(Widget);
        scrollBtn->setObjectName(QStringLiteral("scrollBtn"));
        scrollBtn->setGeometry(QRect(426, 28, 75, 23));
        toolBoxBtn = new QPushButton(Widget);
        toolBoxBtn->setObjectName(QStringLiteral("toolBoxBtn"));
        toolBoxBtn->setGeometry(QRect(345, 28, 75, 23));
        widgetBtn = new QPushButton(Widget);
        widgetBtn->setObjectName(QStringLiteral("widgetBtn"));
        widgetBtn->setGeometry(QRect(189, 28, 75, 23));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(270, 30, 69, 20));
        movie = new QLabel(Widget);
        movie->setObjectName(QStringLiteral("movie"));
        movie->setGeometry(QRect(260, 110, 251, 191));

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", " \347\231\276\345\272\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\350\260\267\346\255\214", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "\347\201\253\347\213\220", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Widget", " \345\256\266\344\272\272", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Widget", "\346\234\213\345\217\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Widget", "  \345\220\214\345\255\246", Q_NULLPTR));
        scrollBtn->setText(QApplication::translate("Widget", "Scroll Area", Q_NULLPTR));
        toolBoxBtn->setText(QApplication::translate("Widget", "Tool Box", Q_NULLPTR));
        widgetBtn->setText(QApplication::translate("Widget", "Tab Widget", Q_NULLPTR));
        movie->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
