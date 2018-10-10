#include "pinewoodpc.h"
#include "ui_pinewoodpc.h"
#include "manageracers.h"
#include "viewracers.h"
#include "prioritylist.h"
#include <windows.h>
#include <QMessageBox>
#include "math.h"
#include <QTextEdit>
#include <QTimer>
#include <QFile>
#include <QFileDialog>
#include "controller.h"


pinewoodPC::pinewoodPC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pinewoodPC)
{
    ctrl=new controller();
    ui->setupUi(this);
    changeLanguageEN();
    normalscreen();
    singlerace();
    fillstuff();
    connect(ui->actionExit,SIGNAL(triggered()),this,SLOT(on_actionExit_triggered()));
    connect(ui->actionPriority_List,SIGNAL(triggered()),this,SLOT(prioritylists()));
    connect(ui->actionView_Racers,SIGNAL(triggered()),this,SLOT(viewracer()));
    connect(ui->actionManage_Racers,SIGNAL(triggered()),this,SLOT(manageracer()));
    connect(ui->actionGuide,SIGNAL(triggered()),this,SLOT(helps()));
    connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(aboutWindow()));
    connect(ui->actionAutosave,SIGNAL(triggered()),this,SLOT(autosave()));
    connect(ui->actionChampionship,SIGNAL(triggered()),this,SLOT(championship()));
    connect(ui->actionEnglish,SIGNAL(triggered()),this,SLOT(changeLanguageEN()));
    connect(ui->actionFull_Screen,SIGNAL(triggered()),this,SLOT(fullscreen()));
    connect(ui->actionHungarian,SIGNAL(triggered()),this,SLOT(changeLanguageHU()));
    connect(ui->actionLoad_Database,SIGNAL(triggered()),this,SLOT(load()));
    connect(ui->actionNew_Database,SIGNAL(triggered()),this,SLOT(newdatabase()));
    connect(ui->actionNormal_Screen,SIGNAL(triggered()),this,SLOT(normalscreen()));
    connect(ui->actionSave_Database,SIGNAL(triggered()),this,SLOT(saveas()));
    connect(ui->actionSingle_race,SIGNAL(triggered()),this,SLOT(singlerace()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(timereset()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(nextrace()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(delay()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(missing()));
    connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(timeread1()));
    connect(ui->lineEdit_2,SIGNAL(textChanged(QString)),this,SLOT(timeread2()));
    connect(ui->lineEdit_3,SIGNAL(textChanged(QString)),this,SLOT(timeread3()));
    connect(ui->lineEdit_4,SIGNAL(textChanged(QString)),this,SLOT(timeread4()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(startChampionship()));
}

pinewoodPC::~pinewoodPC()
{
    delete ui;
}

controller *pinewoodPC::getController()
{return this->ctrl;
}

void pinewoodPC::fillstuff(){
    ui->listWidget_2->addItem("1");
    ui->listWidget_2->addItem("2");
    ui->listWidget_2->addItem("3");
    ui->listWidget_2->addItem("4");
}

bool pinewoodPC::isPriorityRacer()
{
    int j=0;
    bool exists=false;
    for (int i=0;i<ctrl->getCounter();i++)
        if (ctrl->getRacerByIndex(i).getPriority()==true)
            j++;
    if (j==0)
        exists=false;
    else
        exists=true;
    return exists;
}

QString pinewoodPC::getNextRacer(int Time, bool Priority)
{
    QString elem="none";
    for(int i=0; i<ctrl->getCounter();i++)
        switch (Time){
        case 1:
            if (ctrl->getRacerByIndex(i).getName()!=previous && ctrl->getRacerByIndex(i).getT1()==0 && ctrl->getRacerByIndex(i).getPriority()==Priority)
                elem=ctrl->getRacerByIndex(i).getName();
            break;
        case 2:
            if (ctrl->getRacerByIndex(i).getName()!=previous && ctrl->getRacerByIndex(i).getT2()==0 && ctrl->getRacerByIndex(i).getPriority()==Priority)
                elem=ctrl->getRacerByIndex(i).getName();
            break;
        case 3:
            if (ctrl->getRacerByIndex(i).getName()!=previous && ctrl->getRacerByIndex(i).getT3()==0 && ctrl->getRacerByIndex(i).getPriority()==Priority)
                elem=ctrl->getRacerByIndex(i).getName();
            break;
        case 4:
            if (ctrl->getRacerByIndex(i).getName()!=previous && ctrl->getRacerByIndex(i).getT4()==0 && ctrl->getRacerByIndex(i).getPriority()==Priority)
                elem=ctrl->getRacerByIndex(i).getName();
            break;
        }
    return elem;
}

void pinewoodPC::on_actionExit_triggered()
{
    this->close();
}

void pinewoodPC::load()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Load database"), "",tr("PinewoodPC database (*.ppc);;All Files (*)"));
    ctrl->loadFromFile(fileName);

}

void pinewoodPC::newdatabase()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save Database"), "",tr("PinewoodPC database (*.ppc);;All Files (*)"));
    ctrl->newdatabase(fileName);
}

void pinewoodPC::saveas()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save Database"), "",tr("PinewoodPC database (*.ppc);;All Files (*)"));
    ctrl->saveToFile(fileName);
}

void pinewoodPC::autosave()
{
    if (ui->actionAutosave->isChecked())
        ctrl->autosave_on();
    else
        ctrl->autosave_off();
}


void pinewoodPC::delay()
{
}

void pinewoodPC::missing()
{
}

void pinewoodPC::startChampionship()
{
    if (ctrl->getCounter()==0){
        if(languageCode==0)
            QMessageBox::information(this,"Error","No racers in database!",QMessageBox::Ok);
        else
            QMessageBox::information(this,"Hiba","Nincsenek versenyzok az adatbázisban!",QMessageBox::Ok);
    }
    else
    {
        ui->pushButton_5->hide();
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_6->setEnabled(true);
        ui->lineEdit->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit_3->setEnabled(true);
        ui->lineEdit_4->setEnabled(true);
        //        nextrace();
        //        priorityMode=true;
        //        previous="";
        //        currentT=1;
    }

}


void pinewoodPC::manageracer()
{
    manageracers *m;
    m=new manageracers(this);
    m->setController(getController());
    m->setLanguageCode(this->languageCode);
    m->show();
}

void pinewoodPC::viewracer()
{
    viewracers *v;
    v=new viewracers(this);
    v->setController(getController());
    v->setLanguageCode(this->languageCode);
    v->show();
    v->initialize();
}

void pinewoodPC::prioritylists()
{
    prioritylist *pr;
    pr=new prioritylist(this);
    pr->setController(getController());
    pr->setLanguageCode(this->languageCode);
    pr->show();
}

void pinewoodPC::nextrace()
{
    if (ui->actionChampionship->isEnabled()){
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
        ui->lcdNumber->display("0");
        ui->lcdNumber_2->display("0");
        ui->lcdNumber_3->display("0");
        ui->lcdNumber_4->display("0");}
    else{
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
        ui->lcdNumber->display("0");
        ui->lcdNumber_2->display("0");
        ui->lcdNumber_3->display("0");
        ui->lcdNumber_4->display("0");

        //        //Check if I still have racers with priorities
        //        if (isPriorityRacer()==true)
        //            priorityMode=true;
        //        else
        //            priorityMode=false;

        //        //Get the different first 4 occuring racers which meet the criterias, and who race for T.

        //        first=getNextRacer(currentT,priorityMode);
        //        second=getNextRacer(currentT,priorityMode);
        //        third=getNextRacer(currentT,priorityMode);
        //        forth=getNextRacer(currentT,priorityMode);
        //        ui->listWidget->addItem(first);
        //        ui->listWidget->addItem(second);
        //        ui->listWidget->addItem(third);
        //        ui->listWidget->addItem(forth);
    }
}

void pinewoodPC::scrollled()
{
    keybd_event(VK_SCROLL,0,0,0);
    keybd_event(VK_SCROLL,0,KEYEVENTF_KEYUP,0);
}

void pinewoodPC::helps()
{
    QWidget *helpwindow;
    helpwindow=new QWidget;
    helpwindow->show();
    QGridLayout *l1= new QGridLayout(helpwindow);
    QTextEdit *t;
    t=new QTextEdit(helpwindow);
    QIcon *iconname;
    iconname=new QIcon;
    iconname->addFile("../Documents/pine.ico");
    helpwindow->setMaximumSize(350,150);
    helpwindow->setMinimumSize(350,150);
    helpwindow->setWindowIcon(*iconname);
    helpwindow->hide();
    helpwindow->setWindowModality(Qt::ApplicationModal);
    helpwindow->show();
    if (this->languageCode==0)
        t->setText("The START button starts the timers and the racecars. The NEXT RACE button resets the timers and resets the data gathered from the previous race. When a car crosses the finish line, its respective timer stops. The corresponding hardware will automatically input the number of the lane when the respective car crosses the finish line. The hardware requires a working 2.0 USB port, also, the NUM LOCK must be active!");
    else
        t->setText("A START gomb elindítja a stopperórát és a kocsikat. A KÖVETKEZO FUTAM gomb lenullázza a stopperórát és kitorli az elözo futamban nyert adatokat. A kocsi beérkezésénél a hozzá illo stopper leáll. A programhoz illo muszer automatikusan betáplálja a sávok számát a kocsik beérkezésénél. A muszernek szükséges egy muködo 2.0 USB port. A program mukodéséért a NUM LOCK gomb illetve billentyüzeten levo LED kötelezo, hogy aktív legyen!");
    t->show();
    t->setReadOnly(true);
    l1->addWidget(t,0,0);
}

void pinewoodPC::aboutWindow()
{
    if (this->languageCode==0)
        QMessageBox::about(this,tr("Pinewood PC"),tr("<b>PinewoodPC</b> <br> Version 2.0 <br> Author: Köble István <br> Copyright &copy; 2009 - 2012"));
    else
        QMessageBox::about(this,tr("Pinewood PC"),tr("<b>PinewoodPC</b> <br> Verzió 2.0 <br> Szerzo: Köble István <br> Copyright &copy; 2009 - 2012"));

}

void pinewoodPC::championship()
{
    ui->actionSingle_race->setDisabled(false);
    ui->actionChampionship->setDisabled(true);
    ui->actionAutosave->setDisabled(false);
    ui->actionManage_Racers->setDisabled(false);
    ui->actionLoad_Database->setDisabled(false);
    ui->actionNew_Database->setDisabled(false);
    ui->actionPriority_List->setDisabled(false);
    ui->actionSave_Database->setDisabled(false);
    ui->actionView_Racers->setDisabled(false);
    ui->line->show();
    ui->label_5->show();
    ui->label_4->show();
    ui->label_3->show();
    ui->label_2->show();
    ui->label->show();
    ui->listWidget->show();
    ui->pushButton_2->show();
    ui->pushButton_3->show();
    ui->listWidget_2->show();
    ui->pushButton_5->show();
    ui->pushButton_6->show();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lcdNumber->display("0");
    ui->lcdNumber_2->display("0");
    ui->lcdNumber_3->display("0");
    ui->lcdNumber_4->display("0");
}

void pinewoodPC::singlerace()
{
    ui->actionSingle_race->setDisabled(true);
    ui->actionChampionship->setDisabled(false);
    ui->actionAutosave->setDisabled(true);
    ui->actionManage_Racers->setDisabled(true);
    ui->actionLoad_Database->setDisabled(true);
    ui->actionNew_Database->setDisabled(true);
    ui->actionPriority_List->setDisabled(true);
    ui->actionSave_Database->setDisabled(true);
    ui->actionView_Racers->setDisabled(true);
    ui->line->hide();
    ui->label_5->hide();
    ui->listWidget->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->label_4->hide();
    ui->label_3->hide();
    ui->label_2->hide();
    ui->label->hide();
    ui->listWidget_2->hide();
    ui->pushButton_5->hide();
    ui->pushButton_6->hide();
    ui->pushButton_4->setEnabled(true);
    ui->pushButton->setEnabled(true);
    ui->lineEdit->setEnabled(true);
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_3->setEnabled(true);
    ui->lineEdit_4->setEnabled(true);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lcdNumber->display("0");
    ui->lcdNumber_2->display("0");
    ui->lcdNumber_3->display("0");
    ui->lcdNumber_4->display("0");
}

void pinewoodPC::normalscreen()
{
    showNormal();
    ui->actionFull_Screen->setChecked(false);
    ui->actionNormal_Screen->setChecked(true);
}

void pinewoodPC::fullscreen()
{
    showFullScreen();
    ui->actionFull_Screen->setChecked(true);
    ui->actionNormal_Screen->setChecked(false);
}

void pinewoodPC::timeverify()
{
    if (a==0){
        ui->lcdNumber->display("10:0");
        as="10:0";
    }
    if (b==0){
        ui->lcdNumber_2->display("10:0");
        bs="10:0";
    }
    if (c==0){
        ui->lcdNumber_3->display("10:0");
        cs="10:0";
    }
    if (d==0){
        ui->lcdNumber_4->display("10:0");
        ds="10:0";
    }
}

void pinewoodPC::timeread4()
{
    float time=(double)myTimer.nsecsElapsed()/1000000000;
    d=time;
    int v,x;
    QString value,vs,xs="";
    x=trunc(time);
    xs.append(QString("%1").arg(x));
    value=xs+":";
    v=(time-x)*1000;
    vs.append(QString("%1").arg(v));
    if (v>=100)
        value=value+vs;
    else
        if (v<100 && v>10)
            value=value+"0"+vs;
        else
            value=value+"00"+vs;
    ui->lcdNumber_4->display(value);
    ds=value;
}

void pinewoodPC::timeread3()
{
    float time=(double)myTimer.nsecsElapsed()/1000000000;
    c=time;
    int v,x;
    QString value,vs,xs="";
    x=trunc(time);
    xs.append(QString("%1").arg(x));
    value=xs+":";
    v=(time-x)*1000;
    vs.append(QString("%1").arg(v));
    if (v>=100)
        value=value+vs;
    else
        if (v<100 && v>10)
            value=value+"0"+vs;
        else
            value=value+"00"+vs;
    ui->lcdNumber_3->display(value);
    cs=value;
}

void pinewoodPC::timeread2()
{
    float time=(double)myTimer.nsecsElapsed()/1000000000;
    b=time;
    int v,x;
    QString value,vs,xs="";
    x=trunc(time);
    xs.append(QString("%1").arg(x));
    value=xs+":";
    v=(time-x)*1000;
    vs.append(QString("%1").arg(v));
    if (v>=100)
        value=value+vs;
    else
        if (v<100 && v>10)
            value=value+"0"+vs;
        else
            value=value+"00"+vs;

    ui->lcdNumber_2->display(value);
    bs=value;
}

void pinewoodPC::timeread1()
{
    float time=(double)myTimer.nsecsElapsed()/1000000000;
    a=time;
    int v,x;
    QString value,vs,xs="";
    x=trunc(time);
    xs.append(QString("%1").arg(x));
    value=xs+":";
    v=(time-x)*1000;
    vs.append(QString("%1").arg(v));
    if (v>=100)
        value=value+vs;
    else
        if (v<100 && v>10)
            value=value+"0"+vs;
        else
            value=value+"00"+vs;
    ui->lcdNumber->display(value);
    as=value;
}

void pinewoodPC::timereset()
{
    a=0;
    b=0;
    c=0;
    d=0;
    myTimer.start();
    scrollled();
    QTimer::singleShot(10000,this,SLOT(timeverify()));
    QTimer::singleShot(500,this,SLOT(scrollled()));
}

void pinewoodPC::changeLanguageEN()
{
    this->languageCode=0;
    ui->actionHungarian->setChecked(false);
    ui->actionEnglish->setChecked(true);

    ui->menuFile->setTitle("File");
    ui->menuDatabase->setTitle("Database");
    ui->menuHelp->setTitle("Help");
    ui->menuLanguage->setTitle("Language");
    ui->menuRacers->setTitle("Racers");
    ui->menuOptions->setTitle("Options");
    ui->actionAutosave->setText("Autosave");
    ui->actionExit->setText("Exit");
    ui->actionLoad_Database->setText("Load Database");
    ui->actionNew_Database->setText("New Database");
    ui->actionSave_Database->setText("Save Database");
    ui->actionView_Racers->setText("View Racers");
    ui->menuScreen->setTitle("Screen");
    ui->actionFull_Screen->setText("Full Screen");
    ui->actionNormal_Screen->setText("Normal Screen");
    ui->actionSingle_race->setText("Single Race");
    ui->actionChampionship->setText("Championship");
    ui->actionPriority_List->setText("Priority List");
    ui->actionManage_Racers->setText("Manage Racers");
    ui->actionHungarian->setText("Hungarian");
    ui->actionEnglish->setText("English");
    ui->actionAbout->setText("About");
    ui->actionGuide->setText("Guide");
    ui->label_5->setText("Next Racers:");
    ui->pushButton_5->setText("Start Championship");
    ui->pushButton_6->setText("Rerace Last");
    ui->pushButton_2->setText("Delay Selected");
    ui->pushButton_3->setText("Missing");
    ui->pushButton_4->setText("Next Race");
    ui->pushButton->setText("Start");
}

void pinewoodPC::changeLanguageHU()
{
    this->languageCode=1;
    ui->actionHungarian->setChecked(true);
    ui->actionEnglish->setChecked(false);

    ui->menuFile->setTitle("Fájl");
    ui->menuDatabase->setTitle("Adatbázis");
    ui->menuHelp->setTitle("Segítség");
    ui->menuLanguage->setTitle("Nyelv");
    ui->menuRacers->setTitle("Versenyzok");
    ui->menuOptions->setTitle("Opciók");
    ui->actionAutosave->setText("Automentés");
    ui->actionExit->setText("Kilépés");
    ui->actionLoad_Database->setText("Adatbázis Betoltése");
    ui->actionNew_Database->setText("Új Adatbázis");
    ui->actionSave_Database->setText("Adatbázis Mentése");
    ui->actionView_Racers->setText("Versenyzok Megtekintése");
    ui->menuScreen->setTitle("Képernyo");
    ui->actionFull_Screen->setText("Teljes Képernyo");
    ui->actionNormal_Screen->setText("Normál Képernyo");
    ui->actionSingle_race->setText("Egyszeru futam");
    ui->actionChampionship->setText("Bajnokság");
    ui->actionPriority_List->setText("Elsobbségi Lista");
    ui->actionManage_Racers->setText("Versenyzok Szerkesztése");
    ui->actionHungarian->setText("Magyar");
    ui->actionEnglish->setText("Angol");
    ui->actionAbout->setText("Róla");
    ui->actionGuide->setText("Útmutató");
    ui->label_5->setText("Következo Versenyzok:");
    ui->pushButton_5->setText("Bajnokság Kezdése");
    ui->pushButton_6->setText("Utolsót Újra");
    ui->pushButton_2->setText("Kiválasztottat Halaszt");
    ui->pushButton_3->setText("Hiányzó");
    ui->pushButton_4->setText("Következo Futam");
    ui->pushButton->setText("Start");
}
