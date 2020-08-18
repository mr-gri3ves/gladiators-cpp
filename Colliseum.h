#ifndef COLLISEUM_H
#define COLLISEUM_H

#include <vector>
#include <algorithm>
#include "Gladiator.h"

class Colliseum
{
private:
    std::vector<Gladiator> gladiators;

public:
    void addGladiator(const Gladiator &);
    void removeGladiator(const int &index);
    void setGladiators(const std::vector<Gladiator> &);
    const std::vector<Gladiator> &getGladiators() const;
};

#endif //COLLISEUM_H