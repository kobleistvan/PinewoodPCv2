#include "manageracers.h"
#include "ui_manageracers.h"

manageracers::manageracers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageracers)
{
    ui->setupUi(this);
}

manageracers::~manageracers()
{
    delete ui;
}
