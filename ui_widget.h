/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *send_to_client_file;
    QLineEdit *send_edit;
    QPushButton *test_send_bt;
    QPushButton *dis_client_bt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(680, 534);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        send_to_client_file = new QPushButton(Widget);
        send_to_client_file->setObjectName(QStringLiteral("send_to_client_file"));

        gridLayout->addWidget(send_to_client_file, 3, 0, 1, 1);

        send_edit = new QLineEdit(Widget);
        send_edit->setObjectName(QStringLiteral("send_edit"));

        gridLayout->addWidget(send_edit, 1, 0, 1, 1);

        test_send_bt = new QPushButton(Widget);
        test_send_bt->setObjectName(QStringLiteral("test_send_bt"));

        gridLayout->addWidget(test_send_bt, 2, 0, 1, 1);

        dis_client_bt = new QPushButton(Widget);
        dis_client_bt->setObjectName(QStringLiteral("dis_client_bt"));

        gridLayout->addWidget(dis_client_bt, 4, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        send_to_client_file->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\344\273\266", 0));
        test_send_bt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260\346\215\256\347\273\231\345\256\242\346\210\267\347\253\257", 0));
        dis_client_bt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\345\256\242\346\210\267\347\253\257", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
