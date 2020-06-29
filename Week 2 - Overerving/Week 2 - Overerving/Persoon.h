#pragma once
#include <string>

class Persoon
{
public:
	std::string naam;
	int leeftijd;
	Persoon();
	
	virtual std::string getName();
	virtual int getAge();
};

