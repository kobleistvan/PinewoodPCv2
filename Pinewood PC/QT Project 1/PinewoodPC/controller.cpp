#include "controller.h"

controller::controller(){}

void controller::saveToFile(QString fileName){
    repo.saveToFile(fileName);
}

void controller::loadFromFile(QString fileName){
    repo.loadFromFile(fileName);
}

void controller::newdatabase(QString fileName){
    repo.newdatabase(fileName);
}

void controller::autosave_on(){
    repo.setAutoSave(true);
}

void controller::autosave_off(){
    repo.setAutoSave(false);
}

racer controller::getRacerByIndex(int Index)
{
    return repo.getRacerByIndex(Index);
}

int controller::getCounter()
{return repo.getCounter();
}

void controller::addRacer(QString Name,int Category)
{repo.addRacer(Name,Category);
}

void controller::deleteAll()
{
    repo.removeAll();
}

void controller::deleteRacer(racer Racer)
{
    repo.removeRaverByRacer(Racer);
}

racer controller::getRacerByName(QString Name)
{
    return repo.getRacerByName(Name);
}

racer *controller::getRacerByIndex_Pointer(int index)
{
    return repo.getRacerByIndex_Pointer(index);
}

void controller::swap(int i1, int i2)
{
    repo.swap(i1,i2);
}
