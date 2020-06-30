#pragma once
#include <vector>
#include "Drank.h"
class Bestelling
{
public:
	std::vector<Drank> dranken;

	Bestelling();
	Bestelling(std::vector<std::string> _drankNamen);
	Bestelling(std::vector<Drank> _dranken);
	void addDrink(Drank _drank);
	std::vector<Drank> getDrinks();
	float getTotal();
};

