#ifndef WYDARZENIA_EVENT_H
#define WYDARZENIA_EVENT_H

#include <iostream>

using namespace std;

class Event{

private:
    int day,month,year;
    int hour, minutes;
    string name;

public:

    Event(string="brak",int=1,int=1,int=2015,int=12,int=0);
    ~Event();

    void load();
    void show();

};


#endif //WYDARZENIA_EVENT_H
