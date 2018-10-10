#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "repository.h"

class controller
{
public:
    controller();
    void saveToFile(QString fileName);
    void loadFromFile();
private:
    repository repo;
};

#endif // CONTROLLER_H
