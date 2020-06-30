#pragma once
#include "Munt.h"
class Koffiemuntje :
    public Munt
{
public:
    std::string _naam = "Koffiemuntje";
    float _waarde = 999.999f;

    Koffiemuntje();
};

