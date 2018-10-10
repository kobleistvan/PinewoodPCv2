#ifndef PINEWOODPC_H
#define PINEWOODPC_H
#include <QMainWindow>
#include <time.h>
#include <QElapsedTimer>
#include <QTime>
#include <math.h>
#include <QTextEdit>
#include "controller.h"
namespace Ui {
class PinewoodPC;
}

class PinewoodPC : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PinewoodPC(QWidget *parent = 0);
    ~PinewoodPC();
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
    void prioritylist();
    void viewracers();
    void manageracers();
    void saveas();
    void load();
private:
    Ui::PinewoodPC *ui;
    float a,b,c,d;
    QString as,bs,cs,ds;
    int languageCode;
    controller ctrl;
};

#endif // PINEWOODPC_H
