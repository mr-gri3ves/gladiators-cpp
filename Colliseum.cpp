#include "Colliseum.h"

void Colliseum::addGladiator(const Gladiator &gladiator)
{
    this->gladiators.push_back(gladiator);
}

void Colliseum::removeGladiator(const int &index)
{
    this->gladiators.erase(this->gladiators.begin() + index);
}

void Colliseum::setGladiators(const std::vector<Gladiator> &another)
{
    this->gladiators.reserve(another.size());
    this->gladiators.clear();
    this->gladiators.insert(this->gladiators.end(), another.begin(), another.end());
}

const std::vector<Gladiator> &Colliseum::getGladiators() const
{
    return this->gladiators;
}