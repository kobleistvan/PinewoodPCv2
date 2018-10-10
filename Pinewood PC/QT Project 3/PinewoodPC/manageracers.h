#ifndef MANAGERACERS_H
#define MANAGERACERS_H

#include <QDialog>

namespace Ui {
class ManageRacers;
}

class ManageRacers : public QDialog
{
    Q_OBJECT
    
public:
    explicit ManageRacers(QWidget *parent = 0);
    ~ManageRacers();
    
private:
    Ui::ManageRacers *ui;
};

#endif // MANAGERACERS_H
