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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ip_edit;
    QLineEdit *socke_state;
    QLineEdit *port_edit;
    QPushButton *chose_file;
    QPushButton *send_file;
    QLabel *label_2;
    QProgressBar *show_process;
    QPushButton *con_server;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(570, 464);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ip_edit = new QLineEdit(Widget);
        ip_edit->setObjectName(QStringLiteral("ip_edit"));

        gridLayout->addWidget(ip_edit, 1, 1, 1, 2);

        socke_state = new QLineEdit(Widget);
        socke_state->setObjectName(QStringLiteral("socke_state"));

        gridLayout->addWidget(socke_state, 2, 0, 1, 1);

        port_edit = new QLineEdit(Widget);
        port_edit->setObjectName(QStringLiteral("port_edit"));

        gridLayout->addWidget(port_edit, 0, 1, 1, 2);

        chose_file = new QPushButton(Widget);
        chose_file->setObjectName(QStringLiteral("chose_file"));

        gridLayout->addWidget(chose_file, 4, 0, 1, 2);

        send_file = new QPushButton(Widget);
        send_file->setObjectName(QStringLiteral("send_file"));

        gridLayout->addWidget(send_file, 4, 2, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        show_process = new QProgressBar(Widget);
        show_process->setObjectName(QStringLiteral("show_process"));
        show_process->setValue(24);

        gridLayout->addWidget(show_process, 5, 0, 1, 1);

        con_server = new QPushButton(Widget);
        con_server->setObjectName(QStringLiteral("con_server"));

        gridLayout->addWidget(con_server, 2, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243", 0));
        chose_file->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        send_file->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\344\273\266", 0));
        label_2->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250ip", 0));
        con_server->setText(QApplication::translate("Widget", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
