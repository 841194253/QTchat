# QTchat

基于Qt的匿名聊天软件

QT版本为5.14.2

MacOS端各类软件语言版本：C++11、MacOS14.6、QT Creater4.11.1、clang11.0

Linux端各类软件语言版本：C++11、gcc9.1、Ubuntu16.04.7、QT Creater4.11.1

Win端各类软件语言版本：C++11、MinGW_32、QT Creater4.11.1、Inno Setup6.2、ProcessExplorer16.21、Depend dency Walker、Enigmavb9.70

mac端运行时可能会出现icon设置失败的情况，重新运行即可，还有可能会出现系统报错的情况，也是重启软件即可。

Linux端运行时会出现有消息丢失的情况，但是同样的代码在mac上没有问题，可能是UDP传输时出现报文丢失的错误，下次会改成基于TCP的数据传输。Linux的安装包我还没搞定，主要是在git上那个打包脚本太难用了。

Win可能会出现运行报错0x000007错误，错误在Path设置上，应该把MinGW_32放在所有QT编译路径之上，更加详细的原因是有一些dll库是x86的，在MinGW_64上进行编译可以通过，但是进行移植程序的时候就会报错，例如QTXXX.dll库丢失，这个可以通过ProcessExplorer进行发现。安装包的icon是我最喜欢的食蜂小姐姐

如有问题请联系liryi6677@foxmail.com
