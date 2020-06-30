// Week 3 - Koffieautomaat.cpp
// Bob Jeltes

#include <iostream>
#include "Koffieautomaat.h"
#include "Bestelling.h"

int main()
{
    Koffieautomaat koffieAutomaat = Koffieautomaat();
    Bestelling bestelling = Bestelling();

    std::cout << "Goedendag. U kunt de volgende dranken bestellen:\n";
    
    for (int i = 0; i < koffieAutomaat.getPossibleDrinks().size(); i++)
    {
        std::string naam = koffieAutomaat.getPossibleDrinks()[i].getName();
        float prijs = koffieAutomaat.getPossibleDrinks()[i].getPrice();
        std::cout << naam << " E" << prijs << "\n";
    }
    
    
    bool blijfBestellen = true;
    while (blijfBestellen)
    {
        std::cout << "\nGeef uw bestelling op\n";
        std::string drankNaam;
        std::cin >> drankNaam;
        bool drankHerkend = false;
        for (int i = 0; i < koffieAutomaat.getPossibleDrinks().size(); i++)
        {
            if (drankNaam == koffieAutomaat.getPossibleDrinks()[i].getName())
            {
                 bestelling.addDrink(koffieAutomaat.getPossibleDrinks()[i]);
                 drankHerkend = true;
            }
        }
        if (!drankHerkend) {
            std::cout << "Deze drank was niet herkend. Probeer het nogmaals.\n";
            continue;
        }
        std::cout << "\n" << drankNaam << " is aan uw bestelling toegevoegd. Uw huidige bestelling is: \n";
        for (int i = 0; i < bestelling.getDrinks().size(); i++)
        {
            std::cout << bestelling.getDrinks()[i].getName() << "\n";
        }
        std::cout << "Subtotaal: " << bestelling.getTotal() << "\n";
        std::cout << "\nWilt u nog iets bestellen? (y/n)\n";
        blijfBestellen = koffieAutomaat.getConfirmation();
    }

    std::cout << "Bestelling afronden. Te betalen: \nE" << bestelling.getTotal() << "\n";
    // Laat keuze aan munten zien
    std::cout << "Werp uw munt in (typ het nummer voor de gewenste munt)\n";
    for (int i = 0; i < koffieAutomaat.getPossibleCoins().size(); i++)
    {
        std::cout << "Keuze " << i + 1 << ": E" << koffieAutomaat.getPossibleCoins()[i].waarde << "\n";
    }
    float totaalIngeworpen = 0.0f;
    while (totaalIngeworpen < bestelling.getTotal()) 
    {
        std::cout << "Totaal ingeworpen: " << totaalIngeworpen << "\nTe voldoen: " << bestelling.getTotal() - totaalIngeworpen << "\n";
        int input;
        std::cin >> input;
        input -= 1;
        if (input >= 0 && input < koffieAutomaat.getPossibleCoins().size()) {
            Munt ingeworpenMunt = koffieAutomaat.getPossibleCoins()[input];
            bool isKoffiemuntje = input == 2;
            if (isKoffiemuntje) {
                totaalIngeworpen = bestelling.getTotal();
                std::cout << "KOFFIEMUNTJE HERKEND\n";
            }
            else
                totaalIngeworpen += koffieAutomaat.insertCoin(ingeworpenMunt);
            std::cout << "U heeft " << ingeworpenMunt.getName() << " ingeworpen.\n";
        }
        else {
            std::cout << "Munt niet geaccepteerd. Probeer a.u.b. nogmaals.\n";
        }
    }
    
    std::cout << "Betaling voldaan. Dankuwel.\n";

    float wisselgeld = totaalIngeworpen - bestelling.getTotal();
    if (wisselgeld > 0) {
        std::cout << "Uw wisselgeld: " << wisselgeld;
    }
}
