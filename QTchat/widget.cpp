#include "widget.h"
#include "ui_widget.h"
#include <QDataStream>
#include <QMessageBox>
#include <QDateTime>
#include <QColorDialog>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QPushButton>
#include <QFontComboBox>
#include <QToolButton>
#include <QTableWidgetItem>

Widget::Widget(QWidget *parent,QString name)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //初始化
    udpSocket = new QUdpSocket(this);//声明对象
    this->port = 9999;//设置端口
    uName = name;//传输用户名

    //套接字绑定端口号
    //多地址绑定和断线重连
    udpSocket->bind(port,QAbstractSocket::ShareAddress | QAbstractSocket::ReuseAddressHint);
    //绑定端口 绑定模式 模式
    //新用户 接入
    sndMsg(UsrEnter);

    //发送消息按钮
    connect(ui->sendBtn,&QPushButton::clicked,[=](){
        sndMsg(Msg);
    });

    //接收端
    connect(udpSocket,&QUdpSocket::readyRead,this,&Widget::ReceiveMessage);

    //退出按钮
    connect(ui->exitBtn,&QPushButton::clicked,[=](){
        this->close();
    });

    //字体字号设置
    //字体格式设置
    connect(ui->fontCbx,&QFontComboBox::currentFontChanged,[=](const QFont &f){
        ui->msgTxtEdit->setCurrentFont(f);
    });

    //字号设置
    void (QComboBox:: *c)(const QString &text)=&QComboBox::currentIndexChanged;
    connect(ui->sizeCbx,c,[=](const QString &text){
       //字号如果是12.5需要double
        ui->msgTxtEdit->setFontPointSize(text.toDouble());
    });

    //下面三个按钮，增加bool 的作用是防止，用户点击完按钮却没有更改任何设置
    //加粗
    connect(ui->boldTBtn,&QToolButton::clicked,[=](bool isCheck){
       if(isCheck)
       {
           ui->msgTxtEdit->setFontWeight(QFont::Bold);//加粗
       }
    });

    //倾斜
    connect(ui->italicTBtn,&QToolButton::clicked,[=](bool check){
        ui->msgTxtEdit->setFontItalic(check);
    });

    //下划线
    connect(ui->underliineTBtn,&QToolButton::clicked,[=](bool check){
        ui->msgTxtEdit->setFontUnderline(check);
    });

    //字体颜色
    connect(ui->colorTBtn,&QToolButton::clicked,[=](){
        //设置默认颜色不能为黑色，否则更换颜色失败
        ui->msgTxtEdit->setTextColor(QColorDialog::getColor(::Qt::blue));
    });

    //清空聊天记录
    connect(ui->clearTBtn,&QToolButton::clicked,[=](){
       ui->msgBrowser->clear();
    });

    //保存聊天记录
    //将聊天记录保存在本地文件中
    connect(ui->saveTBtn,&QToolButton::clicked,[=](){
        if(ui->msgBrowser->document()->isEmpty())//是否为空
        {
            QMessageBox::warning(this,"警告","聊天记录为空！");
            //QMessageBox类提供一个模态对话框，用于通知用户或询问用户一个问题并接收答案。
            return;
        }
        else{
            QString path = QFileDialog::getSaveFileName(this,"聊天记录","../");
   //保存聊天记录
            if(path.isEmpty())
            {
                //文件路径不存在,是指点击路径后 却没有选择路径，而是点击了退出按钮
                QMessageBox::warning(this,"警告","路径不存在！");
                return;
            }
            else{
                QFile file(path);
                file.open(QIODevice::WriteOnly);
                QTextStream stream(&file);
                //文本流写入数据
                stream<<ui->msgBrowser->toPlainText();
                file.close();
            }
        }
    });

}

void Widget::closeEvent(QCloseEvent *event)
{
    emit this->closeWidget();

    //关闭窗口时触发用户的离开
    sndMsg(UsrLeft);

    //聊天界面关闭 关闭套接字并且销毁
    udpSocket->close();
    udpSocket->destroyed();
}

void Widget::sndMsg(MsgType type)//广播UDP
{
    //要发送的数据包括三种类型：即枚举的三种
    //一个完:整的信息，包括 用户名和发送的信息
   //所以使用数据流进行信息的分段  第一段 信息的类型   第二段   用户名  第三段 信息
    QByteArray array;
    //QByteArray类提供一个字节数组,QByteArray可用于存储原始字节（包括“\ 0” ）和传统的8位 “\ 0” 端接字符串。使用QByteArray比使用const char *更方便.
    QDataStream stream(&array,QIODevice::WriteOnly);
    //QDataStream类为程序提供了读写二进制数据的能力。
    stream<<type<<getUsr();
    //首先将信息的类型写入了流文件中

    switch(type){
    case Msg://普通消息
        //禁止空消息发送
        if(ui->msgTxtEdit->toPlainText() == "")
        {
            QMessageBox::warning(this,"警告","不能发送空消息！");
            return;
        }
        //第三段 发送的真正数据
        stream<<getMsg();
        break;
    case UsrLeft://用户退出
        break;
    case UsrEnter://用户进入
        break;
    default:
        break;
    }
    //书写报文
        //udpSocket->writeDatagram(array,QHostAddress::Broadcast,port);
        //or
        udpSocket->writeDatagram(array,QHostAddress("255.255.255.255"),port);
        //udp采用广播方式，hostaddress 是255.255.255.55
        //本机是  127.0.0.1 即 localhost
}

QString Widget::getUsr()//返回用户名
{
    return this->uName;
}

QString Widget::getMsg()//获取发送内容
{
    QString str;
    str = ui->msgTxtEdit->toHtml();
    //这里边存在字体的格式设置，而toPlainText()仅仅是获取文字，所以不能使用
    //获取到文字之后，将编辑框清空

    ui->msgTxtEdit->clear();
    //重新聚集光标
    ui->msgTxtEdit->setFocus();

    //从获取到的字符串返回
    return str;
}

void Widget::ReceiveMessage()//接收报文
{
    //获取当前时间
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    //获取报文数据长度
    qint64 size = udpSocket->pendingDatagramSize();

    QByteArray array = QByteArray(size,0);
    QDataStream stream(&array,QIODevice::ReadOnly);
    //二进制数组长度size，0进行填充

    //读取报文
    udpSocket->readDatagram(array.data(),size);

    //报文数据需要进行分段解析
    int msgtype;
    //枚举值的实际上还是int类型，该变量用来暂存信息的第一段即类型段
    stream>> msgtype;

    QString usrname;
    //保存报文的第二段信息用户名
    QString msg;
    //保存报文的第三段信息真正发送的信息

    switch (msgtype) {
    case Msg://正常消息
        stream >> usrname >>msg;
        //流出数据
        //流文件中 <<表示存储到流文件中，>>表示从流文件中获取内容也就是读取流文件

        ui->msgBrowser->setTextColor(::Qt::cyan);
        //设置用户名的颜色

        ui->msgBrowser->append("[" + usrname + "]" + time);
        ui->msgBrowser->append(msg);
        break;

    case UsrEnter: //新用户进入
        stream >> usrname;
        usrEnter(usrname);
        break;

    case UsrLeft: //用户离开
        stream >> usrname;
        usrLeft(usrname,time);
        break;

    default:
        break;
    }
}

void Widget::usrEnter(QString username)
{//新用户进入
    bool isEmpty = ui->usrTblWidget->findItems(username,::Qt::MatchExactly).isEmpty();
    if(isEmpty)
    {
        QTableWidgetItem *usr = new QTableWidgetItem(username);
        // QTableWidget是QT程序中常用的显示数据表格的空间，
        //插入到左侧列表中
        ui->usrTblWidget->insertRow(0);
        ui->usrTblWidget->setItem(0,0,usr);

        //在 msgBrowser中显示
        ui->msgBrowser->setTextColor(::Qt::gray);
        //字体颜色

        ui->msgBrowser->append(username+"上线啦!");

        //更新在线人数
        ui->usrNumLbl->setText(QString("在线人数: %1").arg(ui->usrTblWidget->rowCount()));

        //广播自己在线信息

        sndMsg(UsrEnter);
    }
}

void Widget::usrLeft(QString username, QString time)//用户离开聊天窗口
{
    //更新tableWidget
    bool isEmpty = ui->usrTblWidget->findItems(username,Qt::MatchExactly).isEmpty();
    //为真就是不存在，为假就是存在
    if(!isEmpty)
    {
        //查找数据
        int row = ui->usrTblWidget->findItems(username,Qt::MatchExactly).first()->row();

        ui->usrTblWidget->removeRow(row);
        //聊天记录窗口 显示用户已离开

        ui->msgBrowser->setTextColor(Qt::gray);
        //设置字体的颜色

        ui->msgBrowser->append(QString("%1 在 %2 退出聊天！").arg(username).arg(time));
                //下方在线人数减少

        ui->usrNumLbl->setText(QString("在线人数：%1").arg(ui->usrTblWidget->rowCount()));
    }
}

Widget::~Widget()
{
    delete ui;
}

