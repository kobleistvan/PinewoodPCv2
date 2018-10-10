#include "racer.h"

racer::racer(){
    this->name="";
    this->place=0;
    this->time=0;
    this->category=0;
    this->delayed=false;
    this->priority=false;
    this->missing=false;
}

racer::racer(QString name, int category){
    this->name=name;
    this->category=category;
    this->time=0;
    this->place=0;
    this->delayed=false;
    this->priority=false;
    this->missing=false;
}

int racer::getCategory(){
    return this->category;
}

QString racer::getName(){
    return this->name;
}

float racer::getTime(){
    return this->time;
}

int racer::getPlace(){
    return this->place;
}

void racer::setDelayed(bool b){
    this->delayed=b;
}

void racer::setMissing(bool b){
    this->missing=b;
}

void racer::setPriority(bool b){
    this->priority=b;
}

bool racer::getDelayed(){
    return this->delayed;
}

bool racer::getMissing(){
    return this->missing;
}

bool racer::getPriority(){
    return this->priority;
}

void racer::setCategory(int category){
    this->category=category;
}

void racer::setName(QString name){
    this->name=name;
}

void racer::setPlace(int place){
    this->place=place;
}

void racer::setTime(float time){
    this->time=time;
}
