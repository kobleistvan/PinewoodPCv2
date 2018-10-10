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
