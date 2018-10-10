#ifndef REPOSITORY_H
#define REPOSITORY_H
#include "racer.h"
const int cap=1000;
class repository
{
private:
    racer racerlist[cap];
    int counter;
    bool autosave;

public:
    repository();
    void addRacer(QString name, int category);
    racer getRacerByName(QString name);
    racer getRacerByPlace(int place,int category);
    racer getRacerByPriority(int category);
    racer getRacerByIndex(int index);
    racer* getRacerByIndex_Pointer(int index);
    void swap(int i1, int i2);
    void sortByTime();

    void setRacerPriority(bool pri);
    void setRacerDelay(bool del);
    void serRacerMissing(bool miss);

    void removeRacer(QString name);
    void addFromFile(QString name, int category);
    void saveToFile(QString fileName);
    void loadFromFile(QString fileName);
    void newdatabase(QString fileName);
    int getCounter();
    void setAutoSave(bool autosave);
    bool getAutoSave();
    void removeAll();
    void removeRaverByRacer(racer Racer);
};

#endif // REPOSITORY_H
