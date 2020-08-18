#include "Gladiator.h"

Gladiator::Gladiator(const std::string &name)
{
    this->name = name;
}

Gladiator::Gladiator(const Gladiator &another)
{
    this->name = another.name;
}

void Gladiator::setName(const std::string &name)
{
    this->name = name;
}

const std::string &Gladiator::getName() const
{
    return this->name;
}