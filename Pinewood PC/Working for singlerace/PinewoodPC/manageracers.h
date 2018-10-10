#ifndef MANAGERACERS_H
#define MANAGERACERS_H

#include <QDialog>

namespace Ui {
class manageracers;
}

class manageracers : public QDialog
{
    Q_OBJECT
    
public:
    explicit manageracers(QWidget *parent = 0);
    ~manageracers();
    
private:
    Ui::manageracers *ui;
};

#endif // MANAGERACERS_H
