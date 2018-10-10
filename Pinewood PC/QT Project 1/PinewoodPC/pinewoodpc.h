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
    controller* getController();

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
    void startChampionship();
    void reRace();


private:
    void fillstuff();
    bool isPriorityRacer();
    Ui::pinewoodPC *ui;
    float a,b,c,d;
    float a1,b1,c1,d1;
    QString as,bs,cs,ds;
    int languageCode;
    QString first,second,third,forth;
    QString prev1,prev2,prev3,prev4;
    bool priorityMode;
    QString getNextRacer(int Time,bool Priority);
    int currentT;
    controller *ctrl;
};

#endif // PINEWOODPC_H
