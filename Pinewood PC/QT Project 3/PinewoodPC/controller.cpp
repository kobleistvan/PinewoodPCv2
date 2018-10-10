#include "controller.h"

controller::controller(){}

void controller::saveToFile(QString fileName){
    repo.saveToFile(fileName);
}


void controller::loadFromFile(){
    repo.loadFromFile();
}
