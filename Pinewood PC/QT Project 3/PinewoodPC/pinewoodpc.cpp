#include "pinewoodpc.h"
#include "ui_pinewoodpc.h"
#include "prioritylist.h"
#include "ui_prioritylist.h"
#include "viewracers.h"
#include "ui_viewracers.h"
#include "manageracers.h"
#include "ui_manageracers.h"
#include <windows.h>
#include <QWSKeyboardHandler>
#include <QMessageBox>
#include <QFileDialog>
#include <QTimer>

PinewoodPC::PinewoodPC(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::PinewoodPC)
{
    ui->setupUi(this);
    changeLanguageEN();
    singlerace();
    connect(ui->actionMagyar,SIGNAL(triggered()),this,SLOT(changeLanguageHU()));
    connect(ui->actionEnglish,SIGNAL(triggered()),this,SLOT(changeLanguageEN()));
    connect(ui->actionFull_screen,SIGNAL(triggered()),this,SLOT(fullscreen()));
    connect(ui->actionNormal_screen,SIGNAL(triggered()),this,SLOT(normalscreen()));
    connect(ui->actionSingle_Race,SIGNAL(triggered()),this,SLOT(singlerace()));
    connect(ui->actionTournament,SIGNAL(triggered()),this,SLOT(championship()));
    connect(ui->actionAbout_2,SIGNAL(triggered()),this,SLOT(aboutWindow()));
    connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(helps()));
    connect(ui->actionPriority_list,SIGNAL(triggered()),this,SLOT(prioritylist()));
    connect(ui->actionAdd_new_racers,SIGNAL(triggered()),this,SLOT(manageracers()));
    connect(ui->actionView_racers_2,SIGNAL(triggered()),this,SLOT(viewracers()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(timereset()));
    connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(timeread1()));
    connect(ui->lineEdit_2,SIGNAL(textChanged(QString)),this,SLOT(timeread2()));
    connect(ui->lineEdit_3,SIGNAL(textChanged(QString)),this,SLOT(timeread3()));
    connect(ui->lineEdit_4,SIGNAL(textChanged(QString)),this,SLOT(timeread4()));
    connect(ui->actionSave_database,SIGNAL(triggered()),this,SLOT(saveas()));
    connect(ui->actionLoad_database,SIGNAL(triggered()),this,SLOT(load()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(nextrace()));
}

PinewoodPC::~PinewoodPC()
{
    delete ui;
}

void PinewoodPC::on_actionExit_triggered()
{
    this->close();
}

void PinewoodPC::changeLanguageHU(){
    this->languageCode=1;
    ui->actionMagyar->setChecked(true);
    ui->actionEnglish->setChecked(false);
    ui->label->setText("I. HELY");
    ui->label_2->setText("II. HELY");
    ui->label_3->setText("III. HELY");
    ui->label_4->setText("IV. HELY");
    ui->menuFile->setTitle("Fájl");
    ui->menuDatabase->setTitle("Adatbázis");
    ui->menuHelp->setTitle("Segítség");
    ui->menuLanguage->setTitle("Nyelv");
    ui->menuRacers->setTitle("Versenyzok");
    ui->menuOptions->setTitle("Opciók");
    ui->actionAbout->setText("Útmutató");
    ui->actionAbout_2->setText("Róla");
    ui->actionAdd_new_racers->setText("Versenyzok kezelése");
    ui->actionAutosave->setText("Automatikus mentés");
    ui->actionExit->setText("Kilépés");
    ui->actionLoad_database->setText("Adatbázis betoltése");
    ui->actionNew_database->setText("Új adatbázis");
    ui->actionSave_database->setText("Adatbázis kivitele");
    ui->actionView_racers_2->setText("Versenyzok megtekintése");
    ui->menuScreen->setTitle("Képernyo");
    ui->actionFull_screen->setText("Teljes képernyo");
    ui->actionNormal_screen->setText("Normál képernyo");
    ui->actionSingle_Race->setText("Gyors futam");
    ui->actionTournament->setText("Bajnokság");
    ui->actionPriority_list->setText("Elsobbsegi lista");
    ui->pushButton_6->setText("Kovetkezo futam");
}

void PinewoodPC::changeLanguageEN(){
    this->languageCode=0;
    ui->actionMagyar->setChecked(false);
    ui->actionEnglish->setChecked(true);
    ui->label->setText("1st PLACE");
    ui->label_2->setText("2nd PLACE");
    ui->label_3->setText("3rd PLACE");
    ui->label_4->setText("4th PLACE");
    ui->menuFile->setTitle("File");
    ui->menuDatabase->setTitle("Database");
    ui->menuHelp->setTitle("Help");
    ui->menuLanguage->setTitle("Language");
    ui->menuRacers->setTitle("Racers");
    ui->menuOptions->setTitle("Options");
    ui->actionAbout->setText("Guide");
    ui->actionAbout_2->setText("About");
    ui->actionAdd_new_racers->setText("Manage racers");
    ui->actionAutosave->setText("Autosave");
    ui->actionExit->setText("Exit");
    ui->actionLoad_database->setText("Load database");
    ui->actionNew_database->setText("New database");
    ui->actionSave_database->setText("Save database");
    ui->actionView_racers_2->setText("View racers");
    ui->menuScreen->setTitle("Screen");
    ui->actionFull_screen->setText("Fullscreen");
    ui->actionNormal_screen->setText("Normal screen");
    ui->actionSingle_Race->setText("Single race");
    ui->actionTournament->setText("Championship");
    ui->actionPriority_list->setText("Priority list");
    ui->pushButton_6->setText("Next race");
}

void PinewoodPC::fullscreen(){
    showFullScreen();
    ui->actionFull_screen->setChecked(true);
    ui->actionNormal_screen->setChecked(false);
}

void PinewoodPC::normalscreen(){
    showNormal();
    ui->actionFull_screen->setChecked(false);
    ui->actionNormal_screen->setChecked(true);
}

void PinewoodPC::helps(){
    QWidget *helpwindow;
    helpwindow=new QWidget;
    helpwindow->show();
    QGridLayout *l1= new QGridLayout(helpwindow);
    QTextEdit *t;
    t=new QTextEdit(helpwindow);
    QIcon *iconname;
    iconname=new QIcon;
    iconname->addFile("../../Pinewood PC FULL PROJECT/Pinewood PC project files/Saints.ico");
    helpwindow->setMaximumSize(350,150);
    helpwindow->setMinimumSize(350,150);
    helpwindow->setWindowIcon(*iconname);
    helpwindow->hide();
    helpwindow->setWindowModality(Qt::ApplicationModal);
    helpwindow->show();
    if (ui->actionEnglish->isChecked())
        t->setText("The START button starts the timers and the racecars. The NEXT RACE button resets the timers and resets the data gathered from the previous race. When a car crosses the finish line, its respective timer stops. The corresponding hardware will automatically input the number of the lane when the respective car crosses the finish line. The hardware requires a working 2.0 USB port, also, the NUM LOCK must be active!");
    else
        t->setText("A START gomb elindítja a stopperórát és a kocsikat. A KÖVETKEZO FUTAM gomb lenullázza a stopperórát és kitorli az elözo futamban nyert adatokat. A kocsi beérkezésénél a hozzá illo stopper leáll. A programhoz illo muszer automatikusan betáplálja a sávok számát a kocsik beérkezésénél. A muszernek szükséges egy muködo 2.0 USB port. A program mukodéséért a NUM LOCK gomb illetve billentyüzeten levo LED kötelezo, hogy aktív legyen!");
    t->show();
    t->setReadOnly(true);
    l1->addWidget(t,0,0);
}

void PinewoodPC::aboutWindow(){
    if (ui->actionEnglish->isChecked())
        QMessageBox::about(this,tr("Pinewood PC"),tr("<b>PinewoodPC</b> <br> Version 2.0 <br> Author: Köble István <br> Copyright &copy; 2009 - 2012"));
    else
        QMessageBox::about(this,tr("Pinewood PC"),tr("<b>PinewoodPC</b> <br> Verzió 2.0 <br> Szerzo: Köble István <br> Copyright &copy; 2009 - 2012"));
}

void PinewoodPC::championship(){
    ui->actionSingle_Race->setDisabled(false);
    ui->actionTournament->setDisabled(true);
    ui->actionAutosave->setDisabled(false);
    ui->actionAdd_new_racers->setDisabled(false);
    ui->actionLoad_database->setDisabled(false);
    ui->actionNew_database->setDisabled(false);
    ui->actionPriority_list->setDisabled(false);
    ui->actionRemove_racers->setDisabled(false);
    ui->actionSave_database->setDisabled(false);
    ui->actionView_racers_2->setDisabled(false);
}

void PinewoodPC::singlerace(){
    ui->actionSingle_Race->setDisabled(true);
    ui->actionTournament->setDisabled(false);
    ui->actionAutosave->setDisabled(true);
    ui->actionAdd_new_racers->setDisabled(true);
    ui->actionLoad_database->setDisabled(true);
    ui->actionNew_database->setDisabled(true);
    ui->actionPriority_list->setDisabled(true);
    ui->actionRemove_racers->setDisabled(true);
    ui->actionSave_database->setDisabled(true);
    ui->actionView_racers_2->setDisabled(true);
}
void PinewoodPC::timeverify(){
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

void PinewoodPC::timereset(){
    a=0;
    b=0;
    c=0;
    d=0;
    myTimer.start();
    scrollled();
    QTimer::singleShot(10000,this,SLOT(timeverify()));
    QTimer::singleShot(500,this,SLOT(scrollled()));
}

void PinewoodPC::scrollled(){
    keybd_event(VK_SCROLL,0,0,0);
    keybd_event(VK_SCROLL,0,KEYEVENTF_KEYUP,0);
}

void PinewoodPC::timeread1(){
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

void PinewoodPC::timeread2(){
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

void PinewoodPC::timeread3(){
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

void PinewoodPC::timeread4(){
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

void PinewoodPC::nextrace(){
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lcdNumber->display("0");
    ui->lcdNumber_2->display("0");
    ui->lcdNumber_3->display("0");
    ui->lcdNumber_4->display("0");
}

void PinewoodPC::prioritylist(){
    PriorityList *pr;
    pr=new PriorityList;
    pr->show();
}

void PinewoodPC::viewracers(){
    ViewRacers *v;
    v=new ViewRacers;
    v->setLanguageCode(this->languageCode);
    v->show();

}

void PinewoodPC::manageracers(){
    ManageRacers *m;
    m=new ManageRacers;
    m->show();
}

void PinewoodPC::saveas(){

    QString fileName = QFileDialog::getSaveFileName(this,tr("Save Database"), "",tr("PinewoodPC database (*.ppc);;All Files (*)"));
    ctrl.saveToFile(fileName);
//    if (fileName.isEmpty())
//        return;
//    else {
//        QFile file(fileName);
//        file.write("Bs");
//        if (!file.open(QIODevice::WriteOnly)) {
//            QMessageBox::information(this, tr("Unable to open file"),
//                                     file.errorString());
//            return;
//        }
//    }
}

void PinewoodPC::load(){
    ctrl.loadFromFile();
    QString fileName = QFileDialog::getOpenFileName(this,tr("Load database"), "",tr("PinewoodPC database (*.ppc);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else {

        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                                     file.errorString());
            return;
        }

        QDataStream in(&file);
        in.setVersion(QDataStream::Qt_4_5);
        //                contacts.empty();   // empty existing contacts
        //                in >> contacts;

    }
}

