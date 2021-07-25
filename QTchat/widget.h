#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

    enum MsgType{Msg,UsrLeft,UsrEnter};
    //运用枚举设计用户动作

public:
    explicit Widget(QWidget *parent,QString name);
    //explicit用来防止构造函数定义中的隐式转换
    //隐式转换：可以用单个实参来调用的构造函数定义了从形参类型到该类类型的一个隐式转换。
    ~Widget();
    void closeEvent(QCloseEvent *event);
    //QCloseEvent事件是指，当你鼠标点击窗口右上角的关闭按钮时，所触发的函数.如果你没有重写virtual closeEvent(QCloseEvent*event);这个虚函数的话，系统是默认接受关闭事件的，所以就会关闭窗体，但有的时候，比如在记事本程序中，但你的文本未保存时，点击关闭按钮，就会跳出是否保存的提示框，这是因为它重写了关闭事件这个虚函数.
signals:
    void closeWidget();
    //关闭聊天界面的x后，再此打开还能打开

private:
    Ui::Widget *ui;

//udp
public:
    void sndMsg(MsgType type);
    //广播udp，发送是普通消息/用户进入/用户离开
    void usrEnter(QString username);
    //新用户加入
    void usrLeft(QString username,QString time);
    //用户离开
    QString getUsr();//获取用户名
    QString getMsg();//获取聊天内容
private:
    QUdpSocket *udpSocket;//套接字
    qint16 port;//端口号
    QString uName;//用户名

    void ReceiveMessage();//接收报文信息
};
#endif // WIDGET_H
