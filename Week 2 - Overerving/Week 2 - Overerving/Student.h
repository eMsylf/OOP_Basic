#pragma once
#include "Persoon.h"
class Student :
    public Persoon
{
public:
    std::string klas;

    Student(std::string _naam, int _leeftijd, std::string _klas);
    std::string getClass();
};

