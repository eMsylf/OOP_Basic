#pragma once
#include <string>
class Munt
{
public:
	std::string naam;
	float waarde;

	Munt();
	virtual std::string getName();
	virtual float getValue();
};

