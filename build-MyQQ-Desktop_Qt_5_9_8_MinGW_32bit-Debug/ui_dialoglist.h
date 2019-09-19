/********************************************************************************
** Form generated from reading UI file 'dialoglist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLIST_H
#define UI_DIALOGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiaLogList
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *vLayout;

    void setupUi(QWidget *DiaLogList)
    {
        if (DiaLogList->objectName().isEmpty())
            DiaLogList->setObjectName(QStringLiteral("DiaLogList"));
        DiaLogList->resize(293, 700);
        verticalLayout = new QVBoxLayout(DiaLogList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolBox = new QToolBox(DiaLogList);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Raised);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 275, 656));
        vLayout = new QVBoxLayout(page);
        vLayout->setObjectName(QStringLiteral("vLayout"));
        vLayout->setContentsMargins(0, 0, 0, 0);
        toolBox->addItem(page, QString::fromUtf8("\347\276\244\346\210\220\345\221\230"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(DiaLogList);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DiaLogList);
    } // setupUi

    void retranslateUi(QWidget *DiaLogList)
    {
        DiaLogList->setWindowTitle(QApplication::translate("DiaLogList", "Form", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("DiaLogList", "\347\276\244\346\210\220\345\221\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DiaLogList: public Ui_DiaLogList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLIST_H
