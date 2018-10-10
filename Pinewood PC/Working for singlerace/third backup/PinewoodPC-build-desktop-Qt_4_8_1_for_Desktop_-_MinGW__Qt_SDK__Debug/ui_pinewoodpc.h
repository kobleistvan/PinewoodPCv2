/********************************************************************************
** Form generated from reading UI file 'pinewoodpc.ui'
**
** Created: Fri Nov 23 21:02:09 2012
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
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pinewoodPC
{
public:
    QAction *actionExit;
    QAction *actionSingle_race;
    QAction *actionChampionship;
    QAction *actionNew_Database;
    QAction *actionLoad_Database;
    QAction *actionSave_Database;
    QAction *actionAutosave;
    QAction *actionView_Racers;
    QAction *actionManage_Racers;
    QAction *actionPriority_List;
    QAction *actionGuide;
    QAction *actionAbout;
    QAction *actionNormal_Screen;
    QAction *actionFull_Screen;
    QAction *actionEnglish;
    QAction *actionHungarian;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QLabel *label;
    QSpacerItem *verticalSpacer_10;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_17;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_11;
    QLCDNumber *lcdNumber_2;
    QSpacerItem *verticalSpacer_14;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_18;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_12;
    QLCDNumber *lcdNumber_3;
    QSpacerItem *verticalSpacer_15;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_19;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_13;
    QLCDNumber *lcdNumber_4;
    QSpacerItem *verticalSpacer_16;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_20;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_21;
    QFrame *line;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_6;
    QListWidget *listWidget_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuDatabase;
    QMenu *menuRacers;
    QMenu *menuOptions;
    QMenu *menuScreen;
    QMenu *menuLanguage;
    QMenu *menuHelp;

    void setupUi(QMainWindow *pinewoodPC)
    {
        if (pinewoodPC->objectName().isEmpty())
            pinewoodPC->setObjectName(QString::fromUtf8("pinewoodPC"));
        pinewoodPC->resize(753, 428);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Documents/pine.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pinewoodPC->setWindowIcon(icon);
        actionExit = new QAction(pinewoodPC);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSingle_race = new QAction(pinewoodPC);
        actionSingle_race->setObjectName(QString::fromUtf8("actionSingle_race"));
        actionChampionship = new QAction(pinewoodPC);
        actionChampionship->setObjectName(QString::fromUtf8("actionChampionship"));
        actionNew_Database = new QAction(pinewoodPC);
        actionNew_Database->setObjectName(QString::fromUtf8("actionNew_Database"));
        actionLoad_Database = new QAction(pinewoodPC);
        actionLoad_Database->setObjectName(QString::fromUtf8("actionLoad_Database"));
        actionSave_Database = new QAction(pinewoodPC);
        actionSave_Database->setObjectName(QString::fromUtf8("actionSave_Database"));
        actionAutosave = new QAction(pinewoodPC);
        actionAutosave->setObjectName(QString::fromUtf8("actionAutosave"));
        actionAutosave->setCheckable(true);
        actionView_Racers = new QAction(pinewoodPC);
        actionView_Racers->setObjectName(QString::fromUtf8("actionView_Racers"));
        actionManage_Racers = new QAction(pinewoodPC);
        actionManage_Racers->setObjectName(QString::fromUtf8("actionManage_Racers"));
        actionPriority_List = new QAction(pinewoodPC);
        actionPriority_List->setObjectName(QString::fromUtf8("actionPriority_List"));
        actionGuide = new QAction(pinewoodPC);
        actionGuide->setObjectName(QString::fromUtf8("actionGuide"));
        actionAbout = new QAction(pinewoodPC);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionNormal_Screen = new QAction(pinewoodPC);
        actionNormal_Screen->setObjectName(QString::fromUtf8("actionNormal_Screen"));
        actionNormal_Screen->setCheckable(true);
        actionNormal_Screen->setChecked(true);
        actionNormal_Screen->setEnabled(true);
        actionFull_Screen = new QAction(pinewoodPC);
        actionFull_Screen->setObjectName(QString::fromUtf8("actionFull_Screen"));
        actionFull_Screen->setCheckable(true);
        actionFull_Screen->setEnabled(true);
        actionEnglish = new QAction(pinewoodPC);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        actionHungarian = new QAction(pinewoodPC);
        actionHungarian->setObjectName(QString::fromUtf8("actionHungarian"));
        actionHungarian->setCheckable(true);
        centralWidget = new QWidget(pinewoodPC);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(0, 100));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setNumDigits(5);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(0));

        verticalLayout_3->addWidget(lcdNumber);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_17);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setMinimumSize(QSize(0, 100));
        lcdNumber_2->setNumDigits(5);

        verticalLayout_4->addWidget(lcdNumber_2);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_14);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lineEdit_2);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_18);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_12);

        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setMinimumSize(QSize(0, 100));
        lcdNumber_3->setSmallDecimalPoint(false);
        lcdNumber_3->setNumDigits(5);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_5->addWidget(lcdNumber_3);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_15);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lineEdit_3);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_19);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_9);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_13);

        lcdNumber_4 = new QLCDNumber(centralWidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setMinimumSize(QSize(0, 100));
        lcdNumber_4->setSmallDecimalPoint(false);
        lcdNumber_4->setNumDigits(5);
        lcdNumber_4->setDigitCount(5);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber_4->setProperty("value", QVariant(0));

        verticalLayout_6->addWidget(lcdNumber_4);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_16);

        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        lineEdit_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_4);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_20);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_21);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_9->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_9->addWidget(pushButton_6);


        horizontalLayout_3->addLayout(verticalLayout_9);

        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setEnabled(true);
        listWidget_2->setMaximumSize(QSize(20, 75));
        listWidget_2->setSelectionMode(QAbstractItemView::NoSelection);

        horizontalLayout_3->addWidget(listWidget_2);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(16777215, 75));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setProperty("showDropIndicator", QVariant(false));

        horizontalLayout_3->addWidget(listWidget);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_8->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_8->addWidget(pushButton_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_3->addLayout(verticalLayout_8);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(100, 50));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setMaximumSize(QSize(200, 50));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);

        pinewoodPC->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pinewoodPC);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 753, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDatabase = new QMenu(menuBar);
        menuDatabase->setObjectName(QString::fromUtf8("menuDatabase"));
        menuRacers = new QMenu(menuBar);
        menuRacers->setObjectName(QString::fromUtf8("menuRacers"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuScreen = new QMenu(menuOptions);
        menuScreen->setObjectName(QString::fromUtf8("menuScreen"));
        menuLanguage = new QMenu(menuOptions);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        pinewoodPC->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuDatabase->menuAction());
        menuBar->addAction(menuRacers->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSingle_race);
        menuFile->addAction(actionChampionship);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuDatabase->addAction(actionNew_Database);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionLoad_Database);
        menuDatabase->addAction(actionSave_Database);
        menuDatabase->addSeparator();
        menuDatabase->addAction(actionAutosave);
        menuRacers->addAction(actionView_Racers);
        menuRacers->addAction(actionManage_Racers);
        menuRacers->addAction(actionPriority_List);
        menuOptions->addAction(menuScreen->menuAction());
        menuOptions->addAction(menuLanguage->menuAction());
        menuScreen->addAction(actionNormal_Screen);
        menuScreen->addAction(actionFull_Screen);
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionHungarian);
        menuHelp->addAction(actionGuide);
        menuHelp->addAction(actionAbout);

        retranslateUi(pinewoodPC);
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), lineEdit_2, SLOT(setFocus()));
        QObject::connect(lineEdit_2, SIGNAL(textChanged(QString)), lineEdit_3, SLOT(setFocus()));
        QObject::connect(lineEdit_3, SIGNAL(textChanged(QString)), lineEdit_4, SLOT(setFocus()));
        QObject::connect(pushButton, SIGNAL(clicked()), lineEdit, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(pinewoodPC);
    } // setupUi

    void retranslateUi(QMainWindow *pinewoodPC)
    {
        pinewoodPC->setWindowTitle(QApplication::translate("pinewoodPC", "PinewoodPC", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("pinewoodPC", "Exit", 0, QApplication::UnicodeUTF8));
        actionSingle_race->setText(QApplication::translate("pinewoodPC", "Single Race", 0, QApplication::UnicodeUTF8));
        actionChampionship->setText(QApplication::translate("pinewoodPC", "Championship", 0, QApplication::UnicodeUTF8));
        actionNew_Database->setText(QApplication::translate("pinewoodPC", "New Database", 0, QApplication::UnicodeUTF8));
        actionLoad_Database->setText(QApplication::translate("pinewoodPC", "Load Database", 0, QApplication::UnicodeUTF8));
        actionSave_Database->setText(QApplication::translate("pinewoodPC", "Save Database", 0, QApplication::UnicodeUTF8));
        actionAutosave->setText(QApplication::translate("pinewoodPC", "Autosave", 0, QApplication::UnicodeUTF8));
        actionView_Racers->setText(QApplication::translate("pinewoodPC", "View Racers", 0, QApplication::UnicodeUTF8));
        actionManage_Racers->setText(QApplication::translate("pinewoodPC", "Manage Racers", 0, QApplication::UnicodeUTF8));
        actionPriority_List->setText(QApplication::translate("pinewoodPC", "Priority List", 0, QApplication::UnicodeUTF8));
        actionGuide->setText(QApplication::translate("pinewoodPC", "Guide", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("pinewoodPC", "About", 0, QApplication::UnicodeUTF8));
        actionNormal_Screen->setText(QApplication::translate("pinewoodPC", "Normal Screen", 0, QApplication::UnicodeUTF8));
        actionFull_Screen->setText(QApplication::translate("pinewoodPC", "Full Screen", 0, QApplication::UnicodeUTF8));
        actionEnglish->setText(QApplication::translate("pinewoodPC", "English", 0, QApplication::UnicodeUTF8));
        actionHungarian->setText(QApplication::translate("pinewoodPC", "Hungarian", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pinewoodPC", "_________________", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pinewoodPC", "_________________", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pinewoodPC", "_________________", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pinewoodPC", "_________________", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("pinewoodPC", "Start Championship", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("pinewoodPC", "Next Racers:", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("pinewoodPC", "Rerace Last", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("pinewoodPC", "Delay Selected", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("pinewoodPC", "Missing", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("pinewoodPC", "Next Race", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("pinewoodPC", "Start", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("pinewoodPC", "File", 0, QApplication::UnicodeUTF8));
        menuDatabase->setTitle(QApplication::translate("pinewoodPC", "Database", 0, QApplication::UnicodeUTF8));
        menuRacers->setTitle(QApplication::translate("pinewoodPC", "Racers", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("pinewoodPC", "Options", 0, QApplication::UnicodeUTF8));
        menuScreen->setTitle(QApplication::translate("pinewoodPC", "Screen", 0, QApplication::UnicodeUTF8));
        menuLanguage->setTitle(QApplication::translate("pinewoodPC", "Language", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("pinewoodPC", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pinewoodPC: public Ui_pinewoodPC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINEWOODPC_H
