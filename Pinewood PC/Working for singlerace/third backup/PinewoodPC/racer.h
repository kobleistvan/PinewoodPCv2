#ifndef RACER_H
#define RACER_H
#include <QString>
class racer
{
private:
    QString name;
    int category,place;
    float time,t1,t2,t3,t4;
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
    bool operator ==(racer obj);
    void setT1(float time);
    void setT2(float time);
    void setT3(float time);
    void setT4(float time);
    float getT1();
    float getT2();
    float getT3();
    float getT4();
};

#endif // RACER_H
