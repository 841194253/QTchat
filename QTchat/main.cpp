#include "widget.h"
#include "dialoglist.h"
#include <QApplication>
#include "ui_dialoglist.h"
#include "ui_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();
    dialoglist dialoglist1;
    dialoglist1.show();
    return a.exec();
}
