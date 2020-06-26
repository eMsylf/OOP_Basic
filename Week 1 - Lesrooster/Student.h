#pragma once
#include "Persoon.h"
#include <vector>
class Student :
    public Persoon
{
public:
    std::vector<Vak> persoonlijkeVakken;
    Student(std::string _naam);
    Student(std::string _naam, Vak vakken[]);

    int aantalVakken;
};

