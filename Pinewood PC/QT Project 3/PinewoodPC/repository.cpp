#include "repository.h"
#include <QString>
#include <QMessageBox>

repository::repository(){
    this->counter=0;
    this->autosave=true;
    addRacer("Johny",1);
    addRacer("Jacky",1);
    addRacer("Ruth",1);
    addRacer("Rudy",3);
    addRacer("jane",2);
    addRacer("ds",2);
    racerlist[0].setTime(0.324);
    racerlist[0].setPlace(1);
    //    saveToFile();
}

repository::~repository(){}

void repository::addRacer(QString name, int category){
    racer current=racer(name,category);
    this->racerlist[counter]=current;
    counter++;
    sortByTime();
    //    if (this->autosave)
    //        saveToFile();
}

void repository::sortByTime(){

}

int repository::getCounter(){
    return this->counter;
}

void repository::loadFromFile(){

}

void repository::saveToFile(QString fileName){
    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(0,"Unable to open file",file.errorString());
            return;
        }
        else{
         //    file.open(QIODevice::WriteOnly | QIODevice::Text);
            QDataStream out(&file);
            out<<racerlist[0].getName();
            file.close();
        }
    }
}

void repository::addFromFile(QString name, int category){
    racer current=racer(name,category);
    this->racerlist[counter]=current;
    counter++;
}

bool repository::getAutoSave(){
    return this->autosave;
}

void repository::setAutoSave(bool autosave){
    this->autosave=autosave;
}

void repository::removeRacer(QString name){
    for (int i=0;i<=counter;i++){
        if (racerlist[i].getName()==name){
            for (int j=i;j<counter;j++)
                racerlist[j]=racerlist[j+1];
            counter--;
        }
    }
}

racer repository::getRacerByName(QString name){
    racer current;
    for (int i=0;i<=counter;i++){
        if (racerlist[i].getName()==name)
            current=racerlist[i];
    }
    return current;
}

racer repository::getRacerByPlace(int place, int category){
    racer current;
    if (this->racerlist[place].getCategory()==category)
        current=this->racerlist[place];
    return current;
}

