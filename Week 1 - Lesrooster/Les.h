#pragma once
#include "RoosterObject.h"
#include "Vak.h"
#include <time.h>
class Les :
    public RoosterObject
{
public:
    Vak vak;
    int hour;
    int minutes;
    int day;
    int month;
    int year;
    int duurMinuten;
    Les(std::string _naam);
};

