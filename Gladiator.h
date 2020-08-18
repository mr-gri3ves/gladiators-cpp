#ifndef GLADIATOR_H
#define GLADIATOR_H

#include <string>

class Gladiator
{
protected:
    std::string name;
    int hp;

public:
    Gladiator(const std::string &);
    Gladiator(const Gladiator &);
    void setName(const std::string &);
    const std::string &getName() const;
};

#endif // GLADIATOR_H