#include "Bestelling.h"

Bestelling::Bestelling()
{

}

Bestelling::Bestelling(std::vector<std::string> _dranknamen)
{

}

Bestelling::Bestelling(std::vector<Drank> _dranken)
{
	dranken = _dranken;
}

void Bestelling::addDrink(Drank _drank)
{
	dranken.push_back(_drank);
}

std::vector<Drank> Bestelling::getDrinks()
{
	return dranken;
}

float Bestelling::getTotal()
{
    float totaal = 0.0f;
	for (int i = 0; i < dranken.size(); i++)
	{
		totaal += dranken[i].getPrice();
	}
	return totaal;
}
