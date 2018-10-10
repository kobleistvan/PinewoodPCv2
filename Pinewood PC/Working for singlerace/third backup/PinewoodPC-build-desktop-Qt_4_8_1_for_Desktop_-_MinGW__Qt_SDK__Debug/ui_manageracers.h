/********************************************************************************
** Form generated from reading UI file 'manageracers.ui'
**
** Created: Fri Nov 23 21:02:09 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERACERS_H
#define UI_MANAGERACERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_manageracers
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_4;

    void setupUi(QDialog *manageracers)
    {
        if (manageracers->objectName().isEmpty())
            manageracers->setObjectName(QString::fromUtf8("manageracers"));
        manageracers->setWindowModality(Qt::ApplicationModal);
        manageracers->resize(566, 387);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Documents/pine.ico"), QSize(), QIcon::Normal, QIcon::Off);
        manageracers->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(manageracers);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(manageracers);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        comboBox = new QComboBox(manageracers);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        listWidget = new QListWidget(manageracers);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        pushButton = new QPushButton(manageracers);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(manageracers);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        line = new QFrame(manageracers);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(manageracers);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(manageracers);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(manageracers);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(label_3);

        comboBox_2 = new QComboBox(manageracers);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_4->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_3 = new QPushButton(manageracers);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_4 = new QPushButton(manageracers);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(manageracers);

        QMetaObject::connectSlotsByName(manageracers);
    } // setupUi

    void retranslateUi(QDialog *manageracers)
    {
        manageracers->setWindowTitle(QApplication::translate("manageracers", "Manage Racers", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("manageracers", "Select Category:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("manageracers", "Delete Selected", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("manageracers", "Delete All", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("manageracers", "Name:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("manageracers", "Category:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("manageracers", "Add Racer", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("manageracers", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manageracers: public Ui_manageracers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERACERS_H
