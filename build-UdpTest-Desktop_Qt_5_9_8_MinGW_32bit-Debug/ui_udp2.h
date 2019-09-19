/********************************************************************************
** Form generated from reading UI file 'udp2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP2_H
#define UI_UDP2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Udp2
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *myPort;
    QLabel *label_2;
    QLineEdit *toPort;
    QLabel *label_3;
    QLineEdit *toIP;
    QLabel *label_4;
    QTextBrowser *record;
    QLabel *label_5;
    QTextBrowser *message;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendMsg;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Udp2)
    {
        if (Udp2->objectName().isEmpty())
            Udp2->setObjectName(QStringLiteral("Udp2"));
        Udp2->resize(298, 488);
        verticalLayout_2 = new QVBoxLayout(Udp2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Udp2);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        myPort = new QLineEdit(widget);
        myPort->setObjectName(QStringLiteral("myPort"));

        formLayout->setWidget(0, QFormLayout::FieldRole, myPort);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        toPort = new QLineEdit(widget);
        toPort->setObjectName(QStringLiteral("toPort"));

        formLayout->setWidget(1, QFormLayout::FieldRole, toPort);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        toIP = new QLineEdit(widget);
        toIP->setObjectName(QStringLiteral("toIP"));
        toIP->setMinimumSize(QSize(139, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, toIP);


        verticalLayout->addWidget(widget);

        label_4 = new QLabel(Udp2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        record = new QTextBrowser(Udp2);
        record->setObjectName(QStringLiteral("record"));
        record->setReadOnly(true);

        verticalLayout->addWidget(record);

        label_5 = new QLabel(Udp2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        message = new QTextBrowser(Udp2);
        message->setObjectName(QStringLiteral("message"));
        message->setReadOnly(false);

        verticalLayout->addWidget(message);

        widget_2 = new QWidget(Udp2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sendMsg = new QPushButton(widget_2);
        sendMsg->setObjectName(QStringLiteral("sendMsg"));

        horizontalLayout->addWidget(sendMsg);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Udp2);

        QMetaObject::connectSlotsByName(Udp2);
    } // setupUi

    void retranslateUi(QWidget *Udp2)
    {
        Udp2->setWindowTitle(QApplication::translate("Udp2", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Udp2", "MyPort:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Udp2", "ToPort", Q_NULLPTR));
        label_3->setText(QApplication::translate("Udp2", "ToIP", Q_NULLPTR));
        label_4->setText(QApplication::translate("Udp2", "\350\201\212\345\244\251\350\256\260\345\275\225\357\274\232", Q_NULLPTR));
        record->setHtml(QApplication::translate("Udp2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Udp2", "\350\276\223\345\205\245\345\206\205\345\256\271\357\274\232", Q_NULLPTR));
        message->setHtml(QApplication::translate("Udp2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        sendMsg->setText(QApplication::translate("Udp2", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Udp2: public Ui_Udp2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP2_H
