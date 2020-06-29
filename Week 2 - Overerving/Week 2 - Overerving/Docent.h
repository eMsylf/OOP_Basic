#pragma once
#include "Persoon.h"
#include <vector>
class Docent :
    public Persoon
{
public:
    std::vector<std::string> vakken;
    
    Docent(std::string _naam, int _leeftijd, std::vector<std::string> _vakken);
    std::vector<std::string> getSubjects();
};

