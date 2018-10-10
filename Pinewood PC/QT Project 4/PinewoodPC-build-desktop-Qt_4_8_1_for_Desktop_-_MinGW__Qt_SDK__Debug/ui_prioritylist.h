/********************************************************************************
** Form generated from reading UI file 'prioritylist.ui'
**
** Created: Wed Nov 21 19:47:45 2012
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
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PriorityList
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QListView *listView;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *PriorityList)
    {
        if (PriorityList->objectName().isEmpty())
            PriorityList->setObjectName(QString::fromUtf8("PriorityList"));
        PriorityList->setWindowModality(Qt::ApplicationModal);
        PriorityList->resize(604, 368);
        PriorityList->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Pinewood PC FULL PROJECT/Innovacio - Pinewood PC/A program es frameworkok/Pinewood PC project files/Saints.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PriorityList->setWindowIcon(icon);
        gridLayout = new QGridLayout(PriorityList);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(PriorityList);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 4, 2, 3, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(PriorityList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(PriorityList);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(PriorityList);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout, 5, 1, 1, 1);

        listView = new QListView(PriorityList);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 4, 0, 3, 1);

        buttonBox = new QDialogButtonBox(PriorityList);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 2, 1, 1);

        label = new QLabel(PriorityList);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(PriorityList);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(PriorityList);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(PriorityList);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(PriorityList);
        QObject::connect(buttonBox, SIGNAL(accepted()), PriorityList, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PriorityList, SLOT(reject()));

        QMetaObject::connectSlotsByName(PriorityList);
    } // setupUi

    void retranslateUi(QDialog *PriorityList)
    {
        PriorityList->setWindowTitle(QApplication::translate("PriorityList", "Priority List", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PriorityList", ">>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PriorityList", "<<", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("PriorityList", "Clear", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PriorityList", "Racers", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PriorityList", "Priority list", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PriorityList", "Category:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PriorityList: public Ui_PriorityList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIORITYLIST_H
