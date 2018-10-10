#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "repository.h"
#include "racer.h"
class controller
{
public:
    controller();
    void saveToFile(QString fileName);
    void loadFromFile(QString fileName);
    void newdatabase(QString fileName);
    void autosave_on();
    void autosave_off();
    racer getRacerByIndex(int Index);
    int getCounter();
    void addRacer(QString Name, int Category);
    void deleteAll();
    void deleteRacer(racer Racer);
    racer getRacerByName(QString Name);
    racer *getRacerByIndex_Pointer(int index);
    void swap(int i1,int i2);
private:
    repository repo;

};

#endif // CONTROLLER_H
