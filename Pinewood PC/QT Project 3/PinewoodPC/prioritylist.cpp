#include "prioritylist.h"
#include "ui_prioritylist.h"

PriorityList::PriorityList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PriorityList)
{
    ui->setupUi(this);
    populateCombo();
}

PriorityList::~PriorityList()
{
    delete ui;
}

void PriorityList::populateCombo(){
    ui->comboBox->addItem("Kiscserkeszek");
    ui->comboBox->addItem("Nagycserkeszek");
    ui->comboBox->addItem("Roverek");
}
