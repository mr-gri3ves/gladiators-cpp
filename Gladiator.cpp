#include "Gladiator.h"

Gladiator::Gladiator(const std::string &name)
{
    this->name = name;
}

Gladiator::Gladiator(std::string &&name)
{
    this->name = name;
}

Gladiator::Gladiator(const Gladiator &another)
{
    this->name = another.name;
}

Gladiator::Gladiator(Gladiator &&another)
{
    this->name = std::move(another.name);
}

Gladiator::~Gladiator()
{
    this->name.empty();
}

void Gladiator::setName(const std::string &name)
{
    this->name = name;
}

void Gladiator::setName(std::string &&name)
{
    this->name = name;
}

const std::string &Gladiator::getName() const
{
    return this->name;
}

std::ostream &operator<<(std::ostream &os, const Gladiator &gladiator)
{
    return os << gladiator.getName();
}