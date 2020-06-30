#pragma once
#include <vector>
#include "Drank.h"
#include "Koffie.h"
#include "Cappuccino.h"
#include "Espresso.h"
#include "Munt.h"
#include "EenEuro.h"
#include "VijftigCent.h"
#include "Koffiemuntje.h"
class Koffieautomaat
{
public:
	float geldTotaal = 0.0f;

	Koffieautomaat();
	bool getConfirmation();
	std::vector<Drank> getPossibleDrinks();
	std::vector<Munt> getPossibleCoins();
	float insertCoin(Munt _munt);
};

