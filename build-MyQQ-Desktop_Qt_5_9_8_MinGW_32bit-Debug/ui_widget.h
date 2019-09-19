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
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msgBrowser;
    QFrame *frame1;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QComboBox *fontSizeComBox;
    QPushButton *boldBtn;
    QPushButton *italicBtn;
    QPushButton *underlineBtn;
    QPushButton *colorBtn;
    QPushButton *saveBtn;
    QPushButton *clearBtn;
    QTextEdit *msgTxtEdit;
    QTableWidget *userTabWidget;
    QFrame *frame2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *userNumLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *exitBtn;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(730, 450);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrowser = new QTextBrowser(frame);
        msgBrowser->setObjectName(QStringLiteral("msgBrowser"));
        msgBrowser->setMaximumSize(QSize(16777215, 260));

        verticalLayout->addWidget(msgBrowser);

        frame1 = new QFrame(frame);
        frame1->setObjectName(QStringLiteral("frame1"));
        frame1->setMaximumSize(QSize(16777215, 16777215));
        frame1->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(frame1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(frame1);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        fontSizeComBox = new QComboBox(frame1);
        fontSizeComBox->setObjectName(QStringLiteral("fontSizeComBox"));

        horizontalLayout->addWidget(fontSizeComBox);

        boldBtn = new QPushButton(frame1);
        boldBtn->setObjectName(QStringLiteral("boldBtn"));
        boldBtn->setMinimumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldBtn->setIcon(icon);
        boldBtn->setIconSize(QSize(26, 26));
        boldBtn->setCheckable(true);

        horizontalLayout->addWidget(boldBtn);

        italicBtn = new QPushButton(frame1);
        italicBtn->setObjectName(QStringLiteral("italicBtn"));
        italicBtn->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicBtn->setIcon(icon1);
        italicBtn->setIconSize(QSize(26, 26));
        italicBtn->setCheckable(true);

        horizontalLayout->addWidget(italicBtn);

        underlineBtn = new QPushButton(frame1);
        underlineBtn->setObjectName(QStringLiteral("underlineBtn"));
        underlineBtn->setMinimumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineBtn->setIcon(icon2);
        underlineBtn->setIconSize(QSize(26, 26));
        underlineBtn->setCheckable(true);

        horizontalLayout->addWidget(underlineBtn);

        colorBtn = new QPushButton(frame1);
        colorBtn->setObjectName(QStringLiteral("colorBtn"));
        colorBtn->setMinimumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorBtn->setIcon(icon3);
        colorBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(colorBtn);

        saveBtn = new QPushButton(frame1);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setMinimumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveBtn->setIcon(icon4);
        saveBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(saveBtn);

        clearBtn = new QPushButton(frame1);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setMinimumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearBtn->setIcon(icon5);
        clearBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(clearBtn);


        verticalLayout->addWidget(frame1);

        msgTxtEdit = new QTextEdit(frame);
        msgTxtEdit->setObjectName(QStringLiteral("msgTxtEdit"));
        msgTxtEdit->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(msgTxtEdit);


        horizontalLayout_2->addWidget(frame);

        userTabWidget = new QTableWidget(widget_2);
        if (userTabWidget->columnCount() < 1)
            userTabWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userTabWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        userTabWidget->setObjectName(QStringLiteral("userTabWidget"));
        userTabWidget->setMaximumSize(QSize(180, 16777215));
        userTabWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        userTabWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(userTabWidget);


        verticalLayout_2->addWidget(widget_2);

        frame2 = new QFrame(widget);
        frame2->setObjectName(QStringLiteral("frame2"));
        frame2->setMinimumSize(QSize(0, 50));
        frame2->setMaximumSize(QSize(16777215, 100));
        frame2->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(frame2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sendBtn = new QPushButton(frame2);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_3->addWidget(sendBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        userNumLabel = new QLabel(frame2);
        userNumLabel->setObjectName(QStringLiteral("userNumLabel"));

        horizontalLayout_3->addWidget(userNumLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        exitBtn = new QPushButton(frame2);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_3->addWidget(exitBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(frame2);


        verticalLayout_3->addWidget(widget);


        retranslateUi(Widget);

        fontSizeComBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        fontSizeComBox->clear();
        fontSizeComBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "8", Q_NULLPTR)
         << QApplication::translate("Widget", "9", Q_NULLPTR)
         << QApplication::translate("Widget", "10", Q_NULLPTR)
         << QApplication::translate("Widget", "11", Q_NULLPTR)
         << QApplication::translate("Widget", "12", Q_NULLPTR)
         << QApplication::translate("Widget", "13", Q_NULLPTR)
         << QApplication::translate("Widget", "14", Q_NULLPTR)
         << QApplication::translate("Widget", "15", Q_NULLPTR)
         << QApplication::translate("Widget", "16", Q_NULLPTR)
         << QApplication::translate("Widget", "17", Q_NULLPTR)
         << QApplication::translate("Widget", "18", Q_NULLPTR)
         << QApplication::translate("Widget", "19", Q_NULLPTR)
         << QApplication::translate("Widget", "20", Q_NULLPTR)
         << QApplication::translate("Widget", "21", Q_NULLPTR)
         << QApplication::translate("Widget", "22", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        boldBtn->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        boldBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        italicBtn->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        italicBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        underlineBtn->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        underlineBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        colorBtn->setToolTip(QApplication::translate("Widget", "\345\217\230\351\242\234\350\211\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        colorBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveBtn->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearBtn->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clearBtn->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = userTabWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", Q_NULLPTR));
        userNumLabel->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\2320\344\272\272", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
