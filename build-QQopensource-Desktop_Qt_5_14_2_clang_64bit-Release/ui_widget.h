/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *msgBrowser;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underliineTBtn;
    QToolButton *clearTBtn;
    QToolButton *saveTBtn;
    QToolButton *colorTBtn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *msgTxtEdit;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *usrTblWidget;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *usrNumLbl;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitBtn;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(700, 492);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(Widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_3 = new QVBoxLayout(widget_6);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget_4);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(frame_3);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrowser = new QTextBrowser(widget);
        msgBrowser->setObjectName(QStringLiteral("msgBrowser"));

        horizontalLayout->addWidget(msgBrowser);


        verticalLayout->addWidget(widget);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Panel);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fontCbx = new QFontComboBox(frame_2);
        fontCbx->setObjectName(QStringLiteral("fontCbx"));

        horizontalLayout_2->addWidget(fontCbx);

        sizeCbx = new QComboBox(frame_2);
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->setObjectName(QStringLiteral("sizeCbx"));

        horizontalLayout_2->addWidget(sizeCbx);

        boldTBtn = new QToolButton(frame_2);
        boldTBtn->setObjectName(QStringLiteral("boldTBtn"));
        boldTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setIconSize(QSize(26, 26));
        boldTBtn->setCheckable(true);

        horizontalLayout_2->addWidget(boldTBtn);

        italicTBtn = new QToolButton(frame_2);
        italicTBtn->setObjectName(QStringLiteral("italicTBtn"));
        italicTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setIconSize(QSize(26, 26));
        italicTBtn->setCheckable(true);

        horizontalLayout_2->addWidget(italicTBtn);

        underliineTBtn = new QToolButton(frame_2);
        underliineTBtn->setObjectName(QStringLiteral("underliineTBtn"));
        underliineTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underliineTBtn->setIcon(icon2);
        underliineTBtn->setIconSize(QSize(26, 26));
        underliineTBtn->setCheckable(true);

        horizontalLayout_2->addWidget(underliineTBtn);

        clearTBtn = new QToolButton(frame_2);
        clearTBtn->setObjectName(QStringLiteral("clearTBtn"));
        clearTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon3);
        clearTBtn->setIconSize(QSize(26, 26));

        horizontalLayout_2->addWidget(clearTBtn);

        saveTBtn = new QToolButton(frame_2);
        saveTBtn->setObjectName(QStringLiteral("saveTBtn"));
        saveTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon4);
        saveTBtn->setIconSize(QSize(26, 26));

        horizontalLayout_2->addWidget(saveTBtn);

        colorTBtn = new QToolButton(frame_2);
        colorTBtn->setObjectName(QStringLiteral("colorTBtn"));
        colorTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/timg.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon5);
        colorTBtn->setIconSize(QSize(26, 26));

        horizontalLayout_2->addWidget(colorTBtn);


        verticalLayout->addWidget(frame_2);

        widget_2 = new QWidget(frame_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        msgTxtEdit = new QTextEdit(widget_2);
        msgTxtEdit->setObjectName(QStringLiteral("msgTxtEdit"));

        horizontalLayout_3->addWidget(msgTxtEdit);


        verticalLayout->addWidget(widget_2);


        horizontalLayout_4->addWidget(frame_3);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setEnabled(true);
        widget_3->setMaximumSize(QSize(16677222, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        usrTblWidget = new QTableWidget(widget_3);
        if (usrTblWidget->columnCount() < 1)
            usrTblWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        usrTblWidget->setObjectName(QStringLiteral("usrTblWidget"));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(usrTblWidget);


        horizontalLayout_4->addWidget(widget_3);


        verticalLayout_3->addWidget(widget_4);

        frame_5 = new QFrame(widget_6);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::Panel);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        sendBtn = new QPushButton(frame_5);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_5->addWidget(sendBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        usrNumLbl = new QLabel(frame_5);
        usrNumLbl->setObjectName(QStringLiteral("usrNumLbl"));

        horizontalLayout_5->addWidget(usrNumLbl);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        exitBtn = new QPushButton(frame_5);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_5->addWidget(exitBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addWidget(frame_5);


        verticalLayout_4->addWidget(widget_6);


        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        sizeCbx->setItemText(0, QApplication::translate("Widget", "12", nullptr));
        sizeCbx->setItemText(1, QApplication::translate("Widget", "13", nullptr));
        sizeCbx->setItemText(2, QApplication::translate("Widget", "14", nullptr));
        sizeCbx->setItemText(3, QApplication::translate("Widget", "15", nullptr));
        sizeCbx->setItemText(4, QApplication::translate("Widget", "16", nullptr));
        sizeCbx->setItemText(5, QApplication::translate("Widget", "17", nullptr));
        sizeCbx->setItemText(6, QApplication::translate("Widget", "18", nullptr));
        sizeCbx->setItemText(7, QApplication::translate("Widget", "19", nullptr));
        sizeCbx->setItemText(8, QApplication::translate("Widget", "20", nullptr));
        sizeCbx->setItemText(9, QApplication::translate("Widget", "21", nullptr));
        sizeCbx->setItemText(10, QApplication::translate("Widget", "22", nullptr));
        sizeCbx->setItemText(11, QApplication::translate("Widget", "23", nullptr));
        sizeCbx->setItemText(12, QApplication::translate("Widget", "24", nullptr));
        sizeCbx->setItemText(13, QApplication::translate("Widget", "25", nullptr));

#ifndef QT_NO_TOOLTIP
        boldTBtn->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_NO_TOOLTIP
        boldTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        italicTBtn->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_NO_TOOLTIP
        italicTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        underliineTBtn->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        underliineTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        clearTBtn->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        clearTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        saveTBtn->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        saveTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        colorTBtn->setToolTip(QApplication::translate("Widget", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        colorTBtn->setText(QApplication::translate("Widget", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
#ifndef QT_NO_SHORTCUT
        sendBtn->setShortcut(QApplication::translate("Widget", "Ctrl+Return", nullptr));
#endif // QT_NO_SHORTCUT
        usrNumLbl->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\2320\344\272\272", nullptr));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_SHORTCUT
        exitBtn->setShortcut(QApplication::translate("Widget", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

