#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void connectMysql();
    void createDB();
    void initDB();
    QSqlDatabase database;

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
