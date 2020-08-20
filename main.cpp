#include <iostream>
#include <vector>

#include "Gladiator.h"

int main()
{

    std::vector<Gladiator> gladiators;

    Gladiator spartacus("Spartacus");
    Gladiator spartacusEvilTwin = std::move(spartacus);

    std::cout << spartacusEvilTwin << std::endl;
    std::cout << spartacus << std::endl;

    gladiators.push_back(std::move(spartacusEvilTwin));

    std::cout << spartacusEvilTwin << std::endl;

    std::cout << gladiators[0] << std::endl;

    return 0;
}