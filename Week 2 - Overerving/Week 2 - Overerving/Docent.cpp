#include "Docent.h"

Docent::Docent(std::string _naam, int _leeftijd, std::vector<std::string> _vakken)
{
    naam = _naam;
    leeftijd = _leeftijd;
    vakken = _vakken;
}

std::vector<std::string> Docent::getSubjects()
{
    return vakken;
}
