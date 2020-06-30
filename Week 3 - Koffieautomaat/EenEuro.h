#pragma once
#include "Munt.h"
class EenEuro :
	public Munt
{
public:
	std::string _naam = "Een Euro";
	float _waarde = 1.0f;

	EenEuro();
};

