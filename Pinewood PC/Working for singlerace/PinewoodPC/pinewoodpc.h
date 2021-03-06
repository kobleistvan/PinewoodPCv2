#ifndef PINEWOODPC_H
#define PINEWOODPC_H

#include <QMainWindow>
#include <QElapsedTimer>
#include "controller.h"
namespace Ui {
class pinewoodPC;
}

class pinewoodPC : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit pinewoodPC(QWidget *parent = 0);
    ~pinewoodPC();
    QElapsedTimer myTimer;

private slots:
    void on_actionExit_triggered();
    void changeLanguageHU();
    void changeLanguageEN();
    void timereset();
    void timeread1();
    void timeread2();
    void timeread3();
    void timeread4();
    void timeverify();
    void fullscreen();
    void normalscreen();
    void singlerace();
    void championship();
    void aboutWindow();
    void helps();
    void scrollled();
    void nextrace();
    void prioritylists();
    void viewracer();
    void manageracer();
    void saveas();
    void load();
    void autosave();
    void newdatabase();
    void delay();
    void missing();


private:
    void fillstuff();
    Ui::pinewoodPC *ui;
    float a,b,c,d;
    QString as,bs,cs,ds;
    int languageCode;
    controller ctrl;
};

#endif // PINEWOODPC_H
