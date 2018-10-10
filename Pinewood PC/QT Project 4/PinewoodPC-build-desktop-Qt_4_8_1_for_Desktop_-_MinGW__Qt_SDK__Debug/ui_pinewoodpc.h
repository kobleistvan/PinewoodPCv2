/********************************************************************************
** Form generated from reading UI file 'pinewoodpc.ui'
**
** Created: Wed Nov 21 19:47:45 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINEWOODPC_H
#define UI_PINEWOODPC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinewoodPC
{
public:
    QAction *actionExit;
    QAction *actionLoad_database;
    QAction *actionSave_database;
    QAction *actionEnglish;
    QAction *actionMagyar;
    QAction *actionNew_database;
    QAction *actionAbout;
    QAction *actionAbout_2;
    QAction *actionAutosave;
    QAction *actionView_racers;
    QAction *actionView_racers_2;
    QAction *actionAdd_new_racers;
    QAction *actionRemove_racers;
    QAction *actionNormal_screen;
    QAction *actionFull_screen;
    QAction *actionSingle_Race;
    QAction *actionTournament;
    QAction *actionPriority_list;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuDatabase;
    QMenu *menuOptions;
    QMenu *menuLanguage;
    QMenu *menuScreen;
    QMenu *menuHelp;
    QMenu *menuRacers;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PinewoodPC)
    {
        if (PinewoodPC->objectName().isEmpty())
            PinewoodPC->setObjectName(QString::fromUtf8("PinewoodPC"));
        PinewoodPC->resize(872, 459);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Pinewood PC FULL PROJECT/Pinewood PC project files/Saints.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PinewoodPC->setWindowIcon(icon);
        PinewoodPC->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionExit = new QAction(PinewoodPC);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad_database = new QAction(PinewoodPC);
        actionLoad_database->setObjectName(QString::fromUtf8("actionLoad_database"));
        actionSave_database = new QAction(PinewoodPC);
        actionSave_database->setObjectName(QString::fromUtf8("actionSave_database"));
        actionSave_database->setEnabled(false);
        actionEnglish = new QAction(PinewoodPC);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        actionMagyar = new QAction(PinewoodPC);
        actionMagyar->setObjectName(QString::fromUtf8("actionMagyar"));
        actionMagyar->setCheckable(true);
        actionMagyar->setChecked(true);
        actionNew_database = new QAction(PinewoodPC);
        actionNew_database->setObjectName(QString::fromUtf8("actionNew_database"));
        actionAbout = new QAction(PinewoodPC);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_2 = new QAction(PinewoodPC);
        actionAbout_2->setObjectName(QString::fromUtf8("actionAbout_2"));
        actionAutosave = new QAction(PinewoodPC);
        actionAutosave->setObjectName(QString::fromUtf8("actionAutosave"));
        actionAutosave->setCheckable(true);
        actionAutosave->setChecked(true);
        actionView_racers = new QAction(PinewoodPC);
        actionView_racers->setObjectName(QString::fromUtf8("actionView_racers"));
        actionView_racers_2 = new QAction(PinewoodPC);
        actionView_racers_2->setObjectName(QString::fromUtf8("actionView_racers_2"));
        actionAdd_new_racers = new QAction(PinewoodPC);
        actionAdd_new_racers->setObjectName(QString::fromUtf8("actionAdd_new_racers"));
        actionRemove_racers = new QAction(PinewoodPC);
        actionRemove_racers->setObjectName(QString::fromUtf8("actionRemove_racers"));
        actionNormal_screen = new QAction(PinewoodPC);
        actionNormal_screen->setObjectName(QString::fromUtf8("actionNormal_screen"));
        actionNormal_screen->setCheckable(true);
        actionNormal_screen->setChecked(true);
        actionFull_screen = new QAction(PinewoodPC);
        actionFull_screen->setObjectName(QString::fromUtf8("actionFull_screen"));
        actionFull_screen->setCheckable(true);
        actionSingle_Race = new QAction(PinewoodPC);
        actionSingle_Race->setObjectName(QString::fromUtf8("actionSingle_Race"));
        actionSingle_Race->setEnabled(false);
        actionTournament = new QAction(PinewoodPC);
        actionTournament->setObjectName(QString::fromUtf8("actionTournament"));
        actionTournament->setEnabled(true);
        actionPriority_list = new QAction(PinewoodPC);
        actionPriority_list->setObjectName(QString::fromUtf8("actionPriority_list"));
        centralWidget = new QWidget(PinewoodPC);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setSizeIncrement(QSize(0, 0));

        verticalLayout->addWidget(pushButton);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));

        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(132, 240, 126, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(240, 255, 239, 0));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(186, 247, 182, 0));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(66, 120, 63, 0));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(88, 160, 84, 0));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(221, 221, 221, 0));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush8(QColor(193, 247, 190, 127));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lineEdit->setPalette(palette);
        lineEdit->setAutoFillBackground(false);
        lineEdit->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit->setMaxLength(1);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush10(QColor(255, 255, 255, 0));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lineEdit_2->setPalette(palette1);
        lineEdit_2->setAutoFillBackground(false);
        lineEdit_2->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_2->setMaxLength(1);
        lineEdit_2->setFrame(true);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lineEdit_3->setPalette(palette2);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_3->setMaxLength(1);
        lineEdit_3->setFrame(true);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lineEdit_4->setPalette(palette3);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_4->setMaxLength(1);
        lineEdit_4->setFrame(true);
        lineEdit_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setNumDigits(5);
        lcdNumber->setDigitCount(5);
        lcdNumber->setProperty("value", QVariant(0));
        lcdNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_2->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(widget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setSmallDecimalPoint(true);
        lcdNumber_2->setNumDigits(5);
        lcdNumber_2->setDigitCount(5);
        lcdNumber_2->setProperty("value", QVariant(0));
        lcdNumber_2->setProperty("intValue", QVariant(0));

        horizontalLayout_2->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(widget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber_3->sizePolicy().hasHeightForWidth());
        lcdNumber_3->setSizePolicy(sizePolicy2);
        lcdNumber_3->setSmallDecimalPoint(true);
        lcdNumber_3->setNumDigits(5);
        lcdNumber_3->setDigitCount(5);
        lcdNumber_3->setProperty("value", QVariant(0));
        lcdNumber_3->setProperty("intValue", QVariant(0));

        horizontalLayout_2->addWidget(lcdNumber_3);

        lcdNumber_4 = new QLCDNumber(widget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setSmallDecimalPoint(true);
        lcdNumber_4->setNumDigits(5);
        lcdNumber_4->setDigitCount(5);
        lcdNumber_4->setProperty("value", QVariant(0));
        lcdNumber_4->setProperty("intValue", QVariant(0));

        horizontalLayout_2->addWidget(lcdNumber_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(widget);

        PinewoodPC->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PinewoodPC);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 872, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDatabase = new QMenu(menuBar);
        menuDatabase->setObjectName(QString::fromUtf8("menuDatabase"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuLanguage = new QMenu(menuOptions);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuScreen = new QMenu(menuOptions);
        menuScreen->setObjectName(QString::fromUtf8("menuScreen"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuRacers = new QMenu(menuBar);
        menuRacers->setObjectName(QString::fromUtf8("menuRacers"));
        PinewoodPC->setMenuBar(menuBar);
        statusBar = new QStatusBar(PinewoodPC);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PinewoodPC->setStatusBar(statusBar);
        QWidget::setTabOrder(pushButton, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuDatabase->menuAction());
        menuBar->addAction(menuRacers->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSingle_Race);
        menuFile->addAction(actionTournament);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuDatabase->addAction(actionNew_database);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionSave_database);
        menuDatabase->addAction(actionLoad_database);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionAutosave);
        menuOptions->addAction(menuLanguage->menuAction());
        menuOptions->addAction(menuScreen->menuAction());
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionMagyar);
        menuScreen->addAction(actionNormal_screen);
        menuScreen->addAction(actionFull_screen);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_2);
        menuRacers->addAction(actionView_racers_2);
        menuRacers->addSeparator();
        menuRacers->addAction(actionAdd_new_racers);
        menuRacers->addAction(actionPriority_list);

        retranslateUi(PinewoodPC);
        QObject::connect(pushButton, SIGNAL(clicked()), lineEdit, SLOT(setFocus()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), lineEdit_2, SLOT(setFocus()));
        QObject::connect(lineEdit_2, SIGNAL(textChanged(QString)), lineEdit_3, SLOT(setFocus()));
        QObject::connect(lineEdit_3, SIGNAL(textChanged(QString)), lineEdit_4, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(PinewoodPC);
    } // setupUi

    void retranslateUi(QMainWindow *PinewoodPC)
    {
        PinewoodPC->setWindowTitle(QApplication::translate("PinewoodPC", "PinewoodPC", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("PinewoodPC", "Exit", 0, QApplication::UnicodeUTF8));
        actionLoad_database->setText(QApplication::translate("PinewoodPC", "Load database", 0, QApplication::UnicodeUTF8));
        actionSave_database->setText(QApplication::translate("PinewoodPC", "Save database", 0, QApplication::UnicodeUTF8));
        actionEnglish->setText(QApplication::translate("PinewoodPC", "English", 0, QApplication::UnicodeUTF8));
        actionMagyar->setText(QApplication::translate("PinewoodPC", "Magyar", 0, QApplication::UnicodeUTF8));
        actionNew_database->setText(QApplication::translate("PinewoodPC", "New database", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("PinewoodPC", "Guide", 0, QApplication::UnicodeUTF8));
        actionAbout_2->setText(QApplication::translate("PinewoodPC", "About", 0, QApplication::UnicodeUTF8));
        actionAutosave->setText(QApplication::translate("PinewoodPC", "Autosave", 0, QApplication::UnicodeUTF8));
        actionView_racers->setText(QApplication::translate("PinewoodPC", "View racers", 0, QApplication::UnicodeUTF8));
        actionView_racers_2->setText(QApplication::translate("PinewoodPC", "View racers", 0, QApplication::UnicodeUTF8));
        actionAdd_new_racers->setText(QApplication::translate("PinewoodPC", "Manage racers", 0, QApplication::UnicodeUTF8));
        actionRemove_racers->setText(QApplication::translate("PinewoodPC", "Remove racers", 0, QApplication::UnicodeUTF8));
        actionNormal_screen->setText(QApplication::translate("PinewoodPC", "Normal screen", 0, QApplication::UnicodeUTF8));
        actionFull_screen->setText(QApplication::translate("PinewoodPC", "Fullscreen", 0, QApplication::UnicodeUTF8));
        actionSingle_Race->setText(QApplication::translate("PinewoodPC", "Single race", 0, QApplication::UnicodeUTF8));
        actionTournament->setText(QApplication::translate("PinewoodPC", "Championship", 0, QApplication::UnicodeUTF8));
        actionPriority_list->setText(QApplication::translate("PinewoodPC", "Priority list", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PinewoodPC", "Start", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PinewoodPC", "I. HELY", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PinewoodPC", "II. HELY", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PinewoodPC", "III. HELY", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PinewoodPC", "IV. HELY", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("PinewoodPC", "Next race", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("PinewoodPC", "File", 0, QApplication::UnicodeUTF8));
        menuDatabase->setTitle(QApplication::translate("PinewoodPC", "Database", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("PinewoodPC", "Options", 0, QApplication::UnicodeUTF8));
        menuLanguage->setTitle(QApplication::translate("PinewoodPC", "Language", 0, QApplication::UnicodeUTF8));
        menuScreen->setTitle(QApplication::translate("PinewoodPC", "Screen", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("PinewoodPC", "Help", 0, QApplication::UnicodeUTF8));
        menuRacers->setTitle(QApplication::translate("PinewoodPC", "Racers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PinewoodPC: public Ui_PinewoodPC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINEWOODPC_H
