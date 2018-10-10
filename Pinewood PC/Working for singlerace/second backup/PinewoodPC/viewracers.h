#ifndef VIEWRACERS_H
#define VIEWRACERS_H

#include <QDialog>
#include "controller.h"

namespace Ui {
class viewracers;
}

class viewracers : public QDialog
{
    Q_OBJECT
    
public:
    explicit viewracers(QWidget *parent = 0);
    ~viewracers();
    void setLanguageCode(int code);
    void setController(controller *ctrl);
    void initialize();
private:
    Ui::viewracers *ui;
    int languageCode;

    void fillstuff();
    controller* ctrl;
};

#endif // VIEWRACERS_H
