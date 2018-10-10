/********************************************************************************
** Form generated from reading UI file 'prioritylist.ui'
**
** Created: Sat Nov 24 16:21:26 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIORITYLIST_H
#define UI_PRIORITYLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_prioritylist
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;

    void setupUi(QDialog *prioritylist)
    {
        if (prioritylist->objectName().isEmpty())
            prioritylist->setObjectName(QString::fromUtf8("prioritylist"));
        prioritylist->setWindowModality(Qt::ApplicationModal);
        prioritylist->resize(555, 357);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Documents/pine.ico"), QSize(), QIcon::Normal, QIcon::Off);
        prioritylist->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(prioritylist);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox = new QComboBox(prioritylist);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        listWidget = new QListWidget(prioritylist);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        pushButton_2 = new QPushButton(prioritylist);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_5->addWidget(pushButton_2);

        pushButton = new QPushButton(prioritylist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_5->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer_2);

        pushButton_6 = new QPushButton(prioritylist);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_5->addWidget(pushButton_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(prioritylist);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        listWidget_2 = new QListWidget(prioritylist);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        verticalLayout_3->addWidget(listWidget_2);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_5 = new QPushButton(prioritylist);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout);


        retranslateUi(prioritylist);

        QMetaObject::connectSlotsByName(prioritylist);
    } // setupUi

    void retranslateUi(QDialog *prioritylist)
    {
        prioritylist->setWindowTitle(QApplication::translate("prioritylist", "Priority List", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("prioritylist", ">>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("prioritylist", "<<", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("prioritylist", "Clear", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("prioritylist", "Priority List:", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("prioritylist", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class prioritylist: public Ui_prioritylist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIORITYLIST_H
