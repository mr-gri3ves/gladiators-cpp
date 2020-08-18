#include <iostream>

#include "Colliseum.h"

int main()
{
    Colliseum c;

    std::vector<Gladiator> gladiators;

    Gladiator spartacus("Spartacus");
    Gladiator maximus("Maximus");
    Gladiator cadmus("Cadmus");

    gladiators.push_back(spartacus);
    gladiators.push_back(maximus);
    gladiators.push_back(cadmus);

    c.setGladiators(gladiators);

    for (const auto &gladiator : c.getGladiators())
    {
        std::cout << gladiator.getName() << std::endl;
    }
    return 0;
}