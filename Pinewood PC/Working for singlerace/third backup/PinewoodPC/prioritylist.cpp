#include "prioritylist.h"
#include "ui_prioritylist.h"
#include "pinewoodpc.h"
#include <QMessageBox>

prioritylist::prioritylist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prioritylist)
{
    ui->setupUi(this);
    setController(((pinewoodPC)parent).getController());
    fillStuff();
    refreshList();
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(refreshList()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(addPriority()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(removePriority()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(clearPriorities()));
}

prioritylist::~prioritylist()
{
    delete ui;
}

void prioritylist::setLanguageCode(int code)
{
    this->languageCode=code;
    if (languageCode==0){
        ui->pushButton_6->setText("Clear");
        ui->label->setText("Priority List");
    }
    else{
        ui->pushButton_6->setText("Kiürít");
        ui->label->setText("Elsobbsegi Lista");
    }
    fillStuff();
}

void prioritylist::setController(controller *ctrl)
{this->ctrl=ctrl;
}

void prioritylist::fillStuff(){
    ui->comboBox->clear();
    if (languageCode==0){
        this->setWindowTitle("Priority List");
        ui->comboBox->addItem("7-10 Years");
        ui->comboBox->addItem("11-15 Years");
        ui->comboBox->addItem("16+ Years");}
    else{
        this->setWindowTitle("Elsobbségi Lista");
        ui->comboBox->addItem("7-10 Év");
        ui->comboBox->addItem("11-15 Év");
        ui->comboBox->addItem("16+ Év");
    }
}

void prioritylist::refreshList()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    for (int i=0;i<ctrl->getCounter();i++){
        if (ctrl->getRacerByIndex(i).getCategory()==ui->comboBox->currentIndex()){
            if (ctrl->getRacerByIndex(i).getPriority()==false)
                ui->listWidget->addItem(ctrl->getRacerByIndex(i).getName());
            else
                ui->listWidget_2->addItem(ctrl->getRacerByIndex(i).getName());
        }
    }
}

void prioritylist::addPriority()
{
    if (ui->listWidget->selectedItems().isEmpty()){
        if (this->languageCode==0)
            QMessageBox::information(this,"Error","You must select a racer!",QMessageBox::Ok);
        else
            QMessageBox::information(this,"Hiba","Válassz egy versenyzot!",QMessageBox::Ok);
    }
    else{
        for (int i=0;i<ctrl->getCounter();i++){
            if (ctrl->getRacerByIndex(i)==ctrl->getRacerByName(ui->listWidget->currentItem()->text())){
                ctrl->getRacerByIndex_Pointer(i)->setPriority(true);
            }
        }
    }
    refreshList();
}

void prioritylist::removePriority()
{
    if (ui->listWidget_2->selectedItems().isEmpty()){
        if (this->languageCode==0)
            QMessageBox::information(this,"Error","You must select a racer!",QMessageBox::Ok);
        else
            QMessageBox::information(this,"Hiba","Válassz egy versenyzot!",QMessageBox::Ok);
    }
    else{
        for (int i=0;i<ctrl->getCounter();i++){
            if (ctrl->getRacerByIndex(i)==ctrl->getRacerByName(ui->listWidget_2->currentItem()->text())){
                ctrl->getRacerByIndex_Pointer(i)->setPriority(false);
            }
        }
    }
    refreshList();
}

void prioritylist::clearPriorities()
{
    for(int i=0;i<ctrl->getCounter();i++){
        if (ctrl->getRacerByIndex(i).getPriority()==true)
            ctrl->getRacerByIndex_Pointer(i)->setPriority(false);
    }
    refreshList();
}
