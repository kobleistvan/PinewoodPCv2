/********************************************************************************
** Form generated from reading UI file 'manageracers.ui'
**
** Created: Wed Nov 21 19:47:45 2012
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
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageRacers
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ManageRacers)
    {
        if (ManageRacers->objectName().isEmpty())
            ManageRacers->setObjectName(QString::fromUtf8("ManageRacers"));
        ManageRacers->setWindowModality(Qt::ApplicationModal);
        ManageRacers->resize(544, 337);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Pinewood PC FULL PROJECT/Innovacio - Pinewood PC/A program es frameworkok/Pinewood PC project files/Saints.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ManageRacers->setWindowIcon(icon);
        gridLayout = new QGridLayout(ManageRacers);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(ManageRacers);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 1, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(3, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(6, QFormLayout::FieldRole, verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(0, QFormLayout::FieldRole, verticalSpacer_5);


        gridLayout_2->addLayout(formLayout_2, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(ManageRacers);
        QObject::connect(buttonBox, SIGNAL(accepted()), ManageRacers, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ManageRacers, SLOT(reject()));

        QMetaObject::connectSlotsByName(ManageRacers);
    } // setupUi

    void retranslateUi(QDialog *ManageRacers)
    {
        ManageRacers->setWindowTitle(QApplication::translate("ManageRacers", "Manage Racers", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ManageRacers", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ManageRacers", "Category:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ManageRacers", "New racer", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ManageRacers", "Category:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ManageRacers", "Delete racer", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ManageRacers", "Clear list", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManageRacers: public Ui_ManageRacers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERACERS_H
