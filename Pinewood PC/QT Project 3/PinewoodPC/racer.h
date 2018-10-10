#ifndef RACER_H
#define RACER_H
#include <QString>
class racer
{
private:
    QString name;
    int category,place;
    float time;
    bool missing,delayed,priority;
public:
    racer();
    racer(QString name, int category);
    QString getName();
    int getCategory();
    float getTime();
    int getPlace();
    void setName(QString name);
    void setCategory(int category);
    void setPlace(int place);
    void setTime(float time);
    bool getMissing();
    bool getDelayed();
    bool getPriority();
    void setMissing(bool b);
    void setDelayed(bool b);
    void setPriority(bool b);

#endif // RACER_H
