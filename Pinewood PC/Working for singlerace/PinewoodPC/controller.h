#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "repository.h"
class controller
{
public:
    controller();
    void saveToFile(QString fileName);
    void loadFromFile(QString fileName);
    void newdatabase(QString fileName);
    void autosave_on();
    void autosave_off();

private:
    repository repo;
};

#endif // CONTROLLER_H
