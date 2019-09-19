#ifndef DIALOGLIST_H
#define DIALOGLIST_H

#include <QWidget>
#include <QVector>

namespace Ui {
class DiaLogList;
}

class DiaLogList : public QWidget
{
    Q_OBJECT
public:
    explicit DiaLogList(QWidget *parent = nullptr);
    ~DiaLogList();
    QVector<bool> isShow;
private:
    Ui::DiaLogList *ui;
};

#endif // DIALOGLIST_H
