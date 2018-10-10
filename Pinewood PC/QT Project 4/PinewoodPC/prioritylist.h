#ifndef PRIORITYLIST_H
#define PRIORITYLIST_H

#include <QDialog>

namespace Ui {
class PriorityList;
}

class PriorityList : public QDialog
{
    Q_OBJECT
    
public:
    explicit PriorityList(QWidget *parent = 0);
    ~PriorityList();
    
private:
    Ui::PriorityList *ui;
    void populateCombo();
};

#endif // PRIORITYLIST_H
