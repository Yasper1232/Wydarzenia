#ifndef WYDARZENIA_EVENT_H
#define WYDARZENIA_EVENT_H

#include <iostream>

using namespace std;

class Event{
public:

    int day,month,year;
    int hour, minutes;
    string name;

    void load();
    void show();

};


#endif //WYDARZENIA_EVENT_H
