/********************************************************************************
** Form generated from reading UI file 'viewracers.ui'
**
** Created: Thu Nov 22 00:14:55 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRACERS_H
#define UI_VIEWRACERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_viewracers
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QDialog *viewracers)
    {
        if (viewracers->objectName().isEmpty())
            viewracers->setObjectName(QString::fromUtf8("viewracers"));
        viewracers->setWindowModality(Qt::ApplicationModal);
        viewracers->resize(721, 363);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Documents/pine.ico"), QSize(), QIcon::Normal, QIcon::Off);
        viewracers->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(viewracers);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(viewracers);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(viewracers);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(viewracers);

        QMetaObject::connectSlotsByName(viewracers);
    } // setupUi

    void retranslateUi(QDialog *viewracers)
    {
        viewracers->setWindowTitle(QApplication::translate("viewracers", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("viewracers", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class viewracers: public Ui_viewracers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRACERS_H
