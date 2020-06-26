#pragma once
#include "RoosterObject.h"
#include "Student.h"
#include "Docent.h"
class Klas :
    public RoosterObject
{
public:
    Docent tutor;
    Student studenten[30];
};

