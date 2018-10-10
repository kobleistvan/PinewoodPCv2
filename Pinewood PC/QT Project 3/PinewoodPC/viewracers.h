#ifndef VIEWRACERS_H
#define VIEWRACERS_H

#include <QDialog>

namespace Ui {
class ViewRacers;
}

class ViewRacers : public QDialog
{
    Q_OBJECT
    
public:
    explicit ViewRacers(QWidget *parent = 0);
    void setLanguageCode(int code);
    ~ViewRacers();

private:
    Ui::ViewRacers *ui;
    void initialize();
    int languageCode;
};

#endif // VIEWRACERS_H
