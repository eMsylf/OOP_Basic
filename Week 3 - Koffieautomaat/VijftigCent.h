#pragma once
#include "Munt.h"
class VijftigCent :
    public Munt
{
public:
    std::string _naam = "Vijftig Cent";
    float _waarde = 0.50f;

    VijftigCent();
};

