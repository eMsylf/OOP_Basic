#include "Student.h"
#include <iostream>
#include <vector>

Student::Student(std::string _naam)
{
	naam = _naam;
}

Student::Student(std::string _naam, Vak vakken[])
{
	naam = _naam;
	int _aantalVakken = sizeof(vakken);
	persoonlijkeVakken.resize(_aantalVakken);

	aantalVakken = _aantalVakken;

	for (int i = 0; i < aantalVakken; i++)
	{
		persoonlijkeVakken[i] = vakken[i];
	}
}
