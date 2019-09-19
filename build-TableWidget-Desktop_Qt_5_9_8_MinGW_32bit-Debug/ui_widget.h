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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPushButton *addZY;
    QPushButton *deleteZY;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        addZY = new QPushButton(Widget);
        addZY->setObjectName(QStringLiteral("addZY"));

        verticalLayout->addWidget(addZY);

        deleteZY = new QPushButton(Widget);
        deleteZY->setObjectName(QStringLiteral("deleteZY"));

        verticalLayout->addWidget(deleteZY);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        addZY->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\350\265\265\344\272\221", Q_NULLPTR));
        deleteZY->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\350\265\265\344\272\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
