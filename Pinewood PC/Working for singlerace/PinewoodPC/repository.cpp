#include "repository.h"

repository::repository()
{
    this->counter=0;
    this->autosave=true;
    //    saveToFile();
}

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

void repository::loadFromFile(QString fileName){

}

void repository::newdatabase(QString fileName){
}

void repository::saveToFile(QString fileName){
//    if (fileName.isEmpty())
//        return;
//    else {
//        QFile file(fileName);
//        if (!file.open(QIODevice::WriteOnly)) {
//            QMessageBox::information(0,"Unable to open file",file.errorString());
//            return;
//        }
//        else{
//         //    file.open(QIODevice::WriteOnly | QIODevice::Text);
//            QDataStream out(&file);
////            out<<
//            file.close();
//        }
//    }
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
