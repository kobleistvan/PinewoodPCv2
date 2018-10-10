#ifndef MANAGERACERS_H
#define MANAGERACERS_H
#include "controller.h"
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
    void setLanguageCode(int code);
    void setController(controller *ctrl);
private slots:
    void deleteAll();
    void deleteSelected();
    void addRacer();
    void closeMe();
    void refreshList();
private:
    int languageCode;
    Ui::manageracers *ui;
    void fillstuff();
    controller* ctrl;
};

#endif // MANAGERACERS_H
