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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialoglist
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page_1;
    QVBoxLayout *vLayout;

    void setupUi(QWidget *dialoglist)
    {
        if (dialoglist->objectName().isEmpty())
            dialoglist->setObjectName(QStringLiteral("dialoglist"));
        dialoglist->resize(280, 700);
        verticalLayout = new QVBoxLayout(dialoglist);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(dialoglist);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setGeometry(QRect(0, 0, 280, 670));
        vLayout = new QVBoxLayout(page_1);
        vLayout->setObjectName(QStringLiteral("vLayout"));
        toolBox->addItem(page_1, QString::fromUtf8("\347\276\244\346\210\220\345\221\230"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(dialoglist);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialoglist);
    } // setupUi

    void retranslateUi(QWidget *dialoglist)
    {
        dialoglist->setWindowTitle(QString());
        toolBox->setItemText(toolBox->indexOf(page_1), QApplication::translate("dialoglist", "\347\276\244\346\210\220\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialoglist: public Ui_dialoglist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLIST_H
