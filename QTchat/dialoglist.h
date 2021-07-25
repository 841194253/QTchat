#ifndef DIALOGLIST_H
#define DIALOGLIST_H

#include <QWidget>
#include <ui_dialoglist.h>

namespace Ui {
    class dialoglist;
}

class dialoglist : public QWidget
{
    Q_OBJECT

public:
    explicit dialoglist(QWidget *parent = 0);
    //explicit用来防止构造函数定义中的隐式转换
    //隐式转换：可以用单个实参来调用的构造函数定义了从形参类型到该类类型的一个隐式转换。
    ~dialoglist();

    //解决可以重复打开的一个人的窗口
    QVector<bool> isShow;//默认为false
private:
    Ui::dialoglist *ui;
};

#endif // DIALOGLIST_H
