#include "dialoglist.h"
#include "ui_dialoglist.h"
#include <QToolButton>
#include "widget.h"
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QLayout>

dialoglist::dialoglist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dialoglist)
{
    ui->setupUi(this);

    //设置标题
    setWindowTitle("Liryi");

    //设置图标
    setWindowIcon(QPixmap(":/new/prefix1/TB.ico"));

    //姓名设置
    QList<QString>nameList;
    //QList是Qt的一种泛型容器类。它以链表方式存储一组值，并能对这组数据进行快速索引，还提供了快速插入和删除等操作。
    //给用户进行名称输入，后期会改成从数据库的读取名称，并增加用名称注册的功能
    QString nameIndex = "ABCDEFGH";
    for (int i = 0; i < 8; i++)
    {
        QString name = "Test";
        name += nameIndex[i];
        //qDebug()<<name;
        nameList.push_back(name);
    }

    //Icon
    QStringList iconNameList;
    //QStringList类提供了一个字符串列表
    //从QList <QString>继承而来，它提供快速索引为基础的接入以及快速插入和清除
    //Icon 现在因为名称是固定的所以图片也是固定的，后期将会修改成自主选择图片
    iconNameList << "spqy" << "ymrl" << "qq" << "Cherry" << "dr"
                 <<"jj" << "lswh" << "qmnn";
    //使用容器来记录用户
    QVector<QToolButton *> vToolBtu;
    //QVector类是动态数组的模板类，顺序容器，它将自己的每一个对象存储在连续的内存中，可以使用索引号来快速访问它们。使用前需要包含头文件
    //工具按钮（QToolButton）区别于普通按钮（QPushButton）的一点是，工具按钮（QToolButton）可以带图标，他们两个有同一个父类（QAbstractButton）;
    for (int i = 0;i < 8; i++) {
        //设置头像
        QToolButton *toolBtu = new QToolButton;
        //网名
        toolBtu->setText(nameList[i]);
        QString str = QString(":/new/prefix1/%1.png").arg(iconNameList.at(i));

        //设置头像
        toolBtu->setIcon(QPixmap(str));
        //设置头像大小自适应
        toolBtu->setIconSize(QPixmap(str).size());
        //设置按钮风格和图片文字同时显示
        toolBtu->setAutoRaise(true);

        toolBtu->setToolButtonStyle(::Qt::ToolButtonTextBesideIcon);//setToolButtonStyle改变按钮的外观
      //ToolButtonTextBesideIcon文字在图标旁
        //垂直布局
        ui->vLayout->addWidget(toolBtu);

        //保存此用户
        vToolBtu.push_back(toolBtu);
        isShow.push_back(false);
    }

    //对应的按钮加入信号槽
    for (int i = 0;i < vToolBtu.size(); i++) {
        //不添加mutable关键字的时候，不能修改容器中的bool值
        connect(vToolBtu[i],&QToolButton::clicked,[=](){
            if(isShow[i])
            {
                //开个玩笑???
                QMessageBox::warning(this,"警告","您已被列入监控目标，请文明上网！");
                //优化用
                //以下三行才是正经警告
  // QString str1 = QString("与%1的聊天窗口已经打开，不能重复打开窗口！").arg(vToolBtu[i]->text());
                //qDebug()<<str1;
     //QMessageBox::warning(this,"警告",str1);
                return ;
            }

            isShow[i] = true;//原默认是false
            //弹出对话框
            //参数1以顶层窗口弹出，参数二窗口名称
            //但是这个构造函数属于自定义的构造，需要将原函数进行更改

            Widget *widget = new Widget(0,vToolBtu[i]->text());

            //设置聊天窗口的标题
            widget->setWindowTitle(vToolBtu[i]->text());

            //设置该聊天窗口的头像
            widget->setWindowIcon(vToolBtu[i]->icon());
            widget->show();

            connect(widget,&Widget::closeWidget,[=](){
               //关闭聊天窗口
               isShow[i] = false;
            });
        });
    }
}

dialoglist::~dialoglist()
{
    delete ui;
}
