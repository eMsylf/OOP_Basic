#include "Student.h"

Student::Student(std::string _naam, int _leeftijd, std::string _klas)
{
    naam = _naam;
    leeftijd = _leeftijd;
    klas = _klas;
}

std::string Student::getClass()
{
    return klas;
}
