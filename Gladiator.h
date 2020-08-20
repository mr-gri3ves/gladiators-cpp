#ifndef GLADIATOR_H
#define GLADIATOR_H

#include <string>
#include <iostream>

class Gladiator
{
protected:
    std::string name;

public:
    Gladiator(std::string &&);
    Gladiator(const Gladiator &);
    Gladiator(const std::string &);
    Gladiator(Gladiator &&);
    ~Gladiator();
    void setName(const std::string &);
    void setName(std::string &&);
    const std::string &getName() const;
    friend std::ostream &operator<<(std::ostream &, const Gladiator &);
};

#endif // GLADIATOR_H