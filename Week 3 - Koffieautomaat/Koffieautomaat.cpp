#include "Koffieautomaat.h"
#include <iostream>
Koffieautomaat::Koffieautomaat()
{
    
}

bool Koffieautomaat::getConfirmation()
{
    char conf;
    std::cin >> conf;
    if (conf == 'y')
    {
        return true;
    }
    else if (conf == 'n')
    {
        return false;
    }
    return true;
}

std::vector<Drank> Koffieautomaat::getPossibleDrinks() 
{
    Espresso espresso = Espresso();
    Koffie koffie = Koffie();
    Cappuccino cappuccino = Cappuccino();

    return { koffie, cappuccino, espresso };
}

std::vector<Munt> Koffieautomaat::getPossibleCoins()
{
    EenEuro euro = EenEuro();
    VijftigCent vijftigCent = VijftigCent();
    Koffiemuntje koffiemuntje = Koffiemuntje();
    return { euro, vijftigCent, koffiemuntje };
}

float Koffieautomaat::insertCoin(Munt _munt)
{
    return _munt.waarde;
}
