//
// Created by PC-R5-3600 on 21.06.2024.
//
#include <iostream>
#include "event.h"
using namespace std;

void Event::load() {

    cout<<endl<<"Nazwa wydarzenia";
    cin>>name;
    cout<<endl<<"Dzien";
    cin>>day;
    cout<<endl<<"Miesiac";
    cin>>month;
    cout<<endl<<"Rok";
    cin>>year;
    cout<<endl<<"Godzina";
    cin>>hour;
    cout<<endl<<"Minuta";
    cin>>minutes;
}

void Event::show() {

    cout<<endl<<name<<" "<<day<<"."<<month<<"."<<year<<" "<<hour<<":"<<minutes<<endl;
}

Event::Event(string n, int d, int m, int y, int h, int min) {

    name=n;
    day=d;
    month=m;
    year=y;
    hour=h;
    minutes=min;
}

Event::~Event(){

    cout<<" a to ja destruktor";

}