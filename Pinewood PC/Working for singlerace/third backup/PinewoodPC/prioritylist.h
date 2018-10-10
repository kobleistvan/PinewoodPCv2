#ifndef PRIORITYLIST_H
#define PRIORITYLIST_H

#include <QDialog>
#include "controller.h"

namespace Ui {
class prioritylist;
}

class prioritylist : public QDialog
{
    Q_OBJECT
    
public:
    explicit prioritylist(QWidget *parent = 0);
    ~prioritylist();
    void setLanguageCode(int code);
    void setController(controller *ctrl);
private slots:
    void refreshList();
    void addPriority();
    void removePriority();
    void clearPriorities();
private:
    Ui::prioritylist *ui;
    void fillStuff();
    int languageCode;
    controller* ctrl;
};

#endif // PRIORITYLIST_H
