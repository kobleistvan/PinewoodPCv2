#include "viewracers.h"
#include "ui_viewracers.h"
#include "pinewoodpc.h"

viewracers::viewracers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewracers)
{
    ui->setupUi(this);
    setController(((pinewoodPC)parent).getController());
    initialize();
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

viewracers::~viewracers()
{
    delete ui;
}

void viewracers::initialize(){
    if(ctrl->getCounter()!=0){
        for(int i=0;i<ctrl->getCounter();i++)
            ctrl->getRacerByIndex_Pointer(i)->setTime((ctrl->getRacerByIndex_Pointer(i)->getT1()+ctrl->getRacerByIndex_Pointer(i)->getT2()+ctrl->getRacerByIndex_Pointer(i)->getT3()+ctrl->getRacerByIndex_Pointer(i)->getT4())/4);
    }
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->horizontalHeader()->setResizeMode(6, QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->hide();
    for (int i=0;i<ctrl->getCounter();i++){
        ui->tableWidget->insertRow(i);
        QTableWidgetItem* name=new QTableWidgetItem();
        name->setTextAlignment(Qt::AlignCenter);
        name->setText(ctrl->getRacerByIndex(i).getName());
        ui->tableWidget->setItem(i,0,name);

        QTableWidgetItem* category=new QTableWidgetItem();
        category->setTextAlignment(Qt::AlignCenter);
        if (ctrl->getRacerByIndex(i).getCategory()==0)
            category->setText("7-10");
        else
            if(ctrl->getRacerByIndex(i).getCategory()==1)
                category->setText("11-15");
            else
                category->setText("16+");
        ui->tableWidget->setItem(i,1,category);

        QTableWidgetItem* t1=new QTableWidgetItem();
        t1->setTextAlignment(Qt::AlignCenter);
        t1->setText(QString::number(ctrl->getRacerByIndex(i).getT1()));
        ui->tableWidget->setItem(i,2,t1);

        QTableWidgetItem* t2=new QTableWidgetItem();
        t2->setTextAlignment(Qt::AlignCenter);
        t2->setText(QString::number(ctrl->getRacerByIndex(i).getT2()));
        ui->tableWidget->setItem(i,3,t2);

        QTableWidgetItem* t3=new QTableWidgetItem();
        t3->setTextAlignment(Qt::AlignCenter);
        t3->setText(QString::number(ctrl->getRacerByIndex(i).getT3()));
        ui->tableWidget->setItem(i,4,t3);

        QTableWidgetItem* t4=new QTableWidgetItem();
        t4->setTextAlignment(Qt::AlignCenter);
        t4->setText(QString::number(ctrl->getRacerByIndex(i).getT4()));
        ui->tableWidget->setItem(i,5,t4);

        QTableWidgetItem* time=new QTableWidgetItem();
        time->setTextAlignment(Qt::AlignCenter);
        time->setText(QString::number(ctrl->getRacerByIndex(i).getTime()));
        ui->tableWidget->setItem(i,6,time);

//        QTableWidgetItem* place=new QTableWidgetItem();
//        place->setTextAlignment(Qt::AlignCenter);
//        place->setText(QString::number(ctrl->getRacerByIndex(i).getPlace()));
//        ui->tableWidget->setItem(i,7,place);
    }
}

void viewracers::setLanguageCode(int code){
    this->languageCode=code;
    QStringList l;
    if (languageCode==0){
        l<<"Name"<<"Category"<<"Time 1"<<"Time 2"<<"Time 3"<<"Time 4"<<"Final Time";
        ui->tableWidget->setHorizontalHeaderLabels(l);
        this->setWindowTitle("View Racers");
        //        ui->pushButton->setText("Done");
    }
    else{
        l<<"Név"<<"Kategoria"<<"Ido 1"<<"Ido 2"<<"Ido 3"<<"Ido 4"<<"Végso Ido";
        ui->tableWidget->setHorizontalHeaderLabels(l);
        this->setWindowTitle("Versenyzok Megtekintése");
        ui->pushButton->setText("Kész");
    }
}

void viewracers::setController(controller *ctrl)
{this->ctrl=ctrl;
}
