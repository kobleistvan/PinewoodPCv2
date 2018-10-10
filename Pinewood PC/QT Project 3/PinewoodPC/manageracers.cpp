#include "manageracers.h"
#include "ui_manageracers.h"

ManageRacers::ManageRacers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageRacers)
{
    ui->setupUi(this);
}

ManageRacers::~ManageRacers()
{
    delete ui;
}
