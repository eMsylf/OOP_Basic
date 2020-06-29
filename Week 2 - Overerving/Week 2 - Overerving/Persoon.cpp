#include "Persoon.h"

Persoon::Persoon()
{
    naam = "";
    leeftijd = 0;
}

std::string Persoon::getName()
{
    return naam;
}

int Persoon::getAge()
{
    return leeftijd;
}
