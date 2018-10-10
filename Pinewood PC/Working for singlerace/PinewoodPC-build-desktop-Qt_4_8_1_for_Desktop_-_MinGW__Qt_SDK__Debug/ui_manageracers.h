/********************************************************************************
** Form generated from reading UI file 'manageracers.ui'
**
** Created: Thu Nov 22 00:13:26 2012
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
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_manageracers
{
public:

    void setupUi(QDialog *manageracers)
    {
        if (manageracers->objectName().isEmpty())
            manageracers->setObjectName(QString::fromUtf8("manageracers"));
        manageracers->setWindowModality(Qt::ApplicationModal);
        manageracers->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Documents/pine.ico"), QSize(), QIcon::Normal, QIcon::Off);
        manageracers->setWindowIcon(icon);

        retranslateUi(manageracers);

        QMetaObject::connectSlotsByName(manageracers);
    } // setupUi

    void retranslateUi(QDialog *manageracers)
    {
        manageracers->setWindowTitle(QApplication::translate("manageracers", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manageracers: public Ui_manageracers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERACERS_H
