#pragma once
#include <string>
#include "RoosterObject.h"

class Vak : 
	public RoosterObject
{
public:
	Vak();
	//Vak(RoosterObject& c);
	Vak(std::string _naam);
};

