/********************************************************************************
** Form generated from reading UI file 'dialoglist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLIST_H
#define UI_DIALOGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialoglist
{
public:

    void setupUi(QWidget *dialoglist)
    {
        if (dialoglist->objectName().isEmpty())
            dialoglist->setObjectName(QString::fromUtf8("dialoglist"));
        dialoglist->resize(280, 700);

        retranslateUi(dialoglist);

        QMetaObject::connectSlotsByName(dialoglist);
    } // setupUi

    void retranslateUi(QWidget *dialoglist)
    {
        dialoglist->setWindowTitle(QCoreApplication::translate("dialoglist", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialoglist: public Ui_dialoglist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLIST_H
