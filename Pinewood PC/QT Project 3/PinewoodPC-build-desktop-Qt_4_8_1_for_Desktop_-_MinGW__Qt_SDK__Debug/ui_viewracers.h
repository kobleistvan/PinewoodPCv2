/********************************************************************************
** Form generated from reading UI file 'viewracers.ui'
**
** Created: Wed Nov 21 00:18:49 2012
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
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewRacers
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ViewRacers)
    {
        if (ViewRacers->objectName().isEmpty())
            ViewRacers->setObjectName(QString::fromUtf8("ViewRacers"));
        ViewRacers->setWindowModality(Qt::ApplicationModal);
        ViewRacers->resize(891, 343);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Pinewood PC FULL PROJECT/Innovacio - Pinewood PC/A program es frameworkok/Pinewood PC project files/Saints.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ViewRacers->setWindowIcon(icon);
        gridLayout = new QGridLayout(ViewRacers);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        widget = new QWidget(ViewRacers);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setLineWidth(2);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(true);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(8);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(ViewRacers);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewRacers, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewRacers, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewRacers);
    } // setupUi

    void retranslateUi(QDialog *ViewRacers)
    {
        ViewRacers->setWindowTitle(QApplication::translate("ViewRacers", "View Racers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ViewRacers: public Ui_ViewRacers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRACERS_H
