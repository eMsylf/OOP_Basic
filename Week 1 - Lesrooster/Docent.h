#pragma once
#include "Persoon.h"
#include "Vak.h"
class Docent :
    public Persoon
{
public:
    Vak vakken[10];
};

