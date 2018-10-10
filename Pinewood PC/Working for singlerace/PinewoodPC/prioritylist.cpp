#include "prioritylist.h"
#include "ui_prioritylist.h"

prioritylist::prioritylist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prioritylist)
{
    ui->setupUi(this);
    populateCombo();
}

prioritylist::~prioritylist()
{
    delete ui;
}

void prioritylist::setLanguageCode(int code)
{
    this->languagecode=code;
    if (languagecode==0)
        ui->pushButton_6->setText("Clear");
    else
        ui->pushButton_6->setText("Kiürít");
}

void prioritylist::populateCombo(){
    ui->comboBox->addItem("Kiscserkeszek");
    ui->comboBox->addItem("Nagycserkeszek");
    ui->comboBox->addItem("Roverek");
}
