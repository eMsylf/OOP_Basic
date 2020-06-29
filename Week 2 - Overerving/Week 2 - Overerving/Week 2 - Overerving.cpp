// Week 2 - Overerving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Docent.h"
#include "Student.h"

int main()
{
    Docent Peter = Docent("Peter", 39, {"Art, Media & Me", "Look & Inspire", "Project Context"});
    Student Bob = Student("Bob", 26, "GDEV3");
    std::cout << sizeof(Peter.vakken) << "\n";

    std::cout
        << "Docent "
        << Peter.getName()
        << " is "
        << Peter.getAge()
        << " jaar oud, en geeft de volgende vakken:\n";
    for (int i = 0; i < Peter.vakken.size(); i++)
    {
        std::cout << Peter.vakken[i] << "\n";
    }
    
    std::cout << "Student " << Bob.getName() << " is " << Bob.getAge() << " jaar oud, en zit in klas " << Bob.getClass() << "\n";

}
