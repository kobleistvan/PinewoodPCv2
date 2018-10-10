#ifndef PRIORITYLIST_H
#define PRIORITYLIST_H

#include <QDialog>

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
private:
    Ui::prioritylist *ui;
    void populateCombo();
    int languagecode;
};

#endif // PRIORITYLIST_H
