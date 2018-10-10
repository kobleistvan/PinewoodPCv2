#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "racer.h"
//#include <qfile.h>
//#include <qtextstream.h>

//const int cap=1000;
class repository
{
private:
    racer racerlist[1000];
    int counter;
    bool autosave;
    int cap=1000;
public:
    repository();
    ~repository();
    void addRacer(QString name, int category);
    racer getRacerByName(QString name);
    racer getRacerByPlace(int place,int category);
    racer getRacerByPriority(int category);

    void sortByTime();

    void setRacerPriority(bool pri);
    void setRacerDelay(bool del);
    void serRacerMissing(bool miss);

    void removeRacer(QString name);
    void addFromFile(QString name, int category);
    void saveToFile(QString fileName);
    void loadFromFile();
    int getCounter();
    void setAutoSave(bool autosave);
    bool getAutoSave();
};

#endif // REPOSITORY_H
