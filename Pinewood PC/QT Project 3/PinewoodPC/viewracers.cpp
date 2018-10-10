#include "viewracers.h"
#include "ui_viewracers.h"
#include "pinewoodpc.h"

ViewRacers::ViewRacers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewRacers)
{
    ui->setupUi(this);
    languageCode=0;
    initialize();
}

ViewRacers::~ViewRacers()
{
    delete ui;
}

void ViewRacers::initialize(){
    ui->tableWidget->setRowCount(2);
    ui->tableWidget->setColumnCount(8);

    ui->tableWidget->horizontalHeader()->setResizeMode(7, QHeaderView::Stretch);
    //    ui->tableWidget->verticalHeader()->hide();

    for (int ridx = 0 ; ridx < 1000 ; ridx++ )
    {
        for (int cidx = 0 ; cidx < 8 ; cidx++)
        {
            QTableWidgetItem* item = new QTableWidgetItem();
            item->setText("-");
            ui->tableWidget->setItem(ridx,cidx,item);
        }
    }
}
void ViewRacers::setLanguageCode(int code){
    this->languageCode=code;

    QStringList l;
    if (languageCode==0)
        l<<"Name"<<"Category"<<"Time 1"<<"Time 2"<<"Time 3"<<"Time 4"<<"Final Time"<<"Place";
    else
        l<<"Név"<<"Kategoria"<<"Ido 1"<<"Ido 2"<<"Ido 3"<<"Ido 4"<<"Végso Ido"<<"Helyezés";
    ui->tableWidget->setHorizontalHeaderLabels(l);
}
