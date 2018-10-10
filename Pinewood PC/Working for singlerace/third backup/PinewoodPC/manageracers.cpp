#include "manageracers.h"
#include "ui_manageracers.h"
#include <QMessageBox>
#include <pinewoodpc.h>
manageracers::manageracers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageracers)
{
    ui->setupUi(this);
    setController(((pinewoodPC)parent).getController());
    fillstuff();
    refreshList();
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(deleteAll()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(closeMe()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(addRacer()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(deleteSelected()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(refreshList()));
}

manageracers::~manageracers()
{
    delete ui;
}

void manageracers::setLanguageCode(int code)
{
    this->languageCode=code;
    fillstuff();
}

void manageracers::setController(controller *ctrl)
{this->ctrl=ctrl;
}

void manageracers::deleteAll()
{
    QMessageBox *msg=new QMessageBox;
    if (this->languageCode==0){
    msg->setWindowTitle("Delete every racer");
    msg->setText("Are you sure you want to delete every racer?");}
    else
    {
        msg->setWindowTitle("Minden versenyzo torlése");
        msg->setText("Biztos törolni akarsz minden versenyzot?");
    }
    msg->setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    msg->setDefaultButton(QMessageBox::No);
    msg->setIcon(QMessageBox::Warning);

    QIcon *iconname;
    iconname=new QIcon;
    iconname->addFile("../Documents/pine.ico");
    msg->setWindowIcon(*iconname);
    int ret=msg->exec();
    switch(ret){
    case QMessageBox::Yes:
        ctrl->deleteAll();
        refreshList();
        break;
    case QMessageBox::No:
        break;

    }
}

void manageracers::deleteSelected()
{
    if (ui->listWidget->count()!=0){
        ctrl->deleteRacer(ctrl->getRacerByName(ui->listWidget->currentItem()->text()));
        refreshList();}
    else{
        if (this->languageCode==0)
            QMessageBox::information(this,"Error","You must select a racer!",QMessageBox::Ok);
        else
            QMessageBox::information(this,"Hiba","Válassz egy versenyzot!",QMessageBox::Ok);
    }
}

void manageracers::addRacer()
{
    QString name;
    name=ui->lineEdit->text();
    if (ui->lineEdit->text()==""){
        if (this->languageCode==0)
            QMessageBox::information(this,"Error","Name must not be empty!",QMessageBox::Ok);
        else
            QMessageBox::information(this,"Hiba","A név nem lehet üres!",QMessageBox::Ok);
    }else{
        //Verify if already exists
        ctrl->addRacer(name,ui->comboBox_2->currentIndex());
        ui->lineEdit->setText("");
        refreshList();
    }
}

void manageracers::closeMe()
{this->close();
}

void manageracers::refreshList()
{
    ui->listWidget->clear();
    for (int i=0;i<ctrl->getCounter();i++)
        if (ctrl->getRacerByIndex(i).getCategory()==ui->comboBox->currentIndex())
            ui->listWidget->addItem(ctrl->getRacerByIndex(i).getName());
}

void manageracers::fillstuff()
{
    ui->comboBox->clear();
    ui->comboBox_2->clear();
    if (languageCode==0){
        this->setWindowTitle("Manage Racers");
        ui->pushButton->setText("Delete Selected");
        ui->pushButton_2->setText("Delete All");
        ui->pushButton_3->setText("Add Racer");
        ui->pushButton_4->setText("Done");
        ui->label->setText("Select Category:");
        ui->label_2->setText("Name:");
        ui->label_3->setText("Category:");
        ui->comboBox->addItem("7-10 Years");
        ui->comboBox->addItem("11-15 Years");
        ui->comboBox->addItem("16+ Years");
        ui->comboBox_2->addItem("7-10 Years");
        ui->comboBox_2->addItem("11-15 Years");
        ui->comboBox_2->addItem("16+ Years");}
    else{
        this->setWindowTitle("Versenyzok Szerkesztése");
        ui->pushButton->setText("Kiválasztottat törol");
        ui->pushButton_2->setText("Mindent törol");
        ui->pushButton_3->setText("Versenyzo hozzáadása");
        ui->pushButton_4->setText("Kész");
        ui->label->setText("Kategoria kiválasztása:");
        ui->label_2->setText("Név:");
        ui->label_3->setText("Kategoria:");
        ui->comboBox->addItem("7-10 Év");
        ui->comboBox->addItem("11-15 Év");
        ui->comboBox->addItem("16+ Év");
        ui->comboBox_2->addItem("7-10 Év");
        ui->comboBox_2->addItem("11-15 Év");
        ui->comboBox_2->addItem("16+ Év");
    }
}
