#ifndef VIEWRACERS_H
#define VIEWRACERS_H

#include <QDialog>

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
    
private:
    Ui::viewracers *ui;
    int languageCode;
    void initialize();
};

#endif // VIEWRACERS_H
