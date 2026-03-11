#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include "Hero.h"

class MagicalEntity : public Hero
{
private:
    int spellPower;

public:
    MagicalEntity(string name, int health, int power, int spell);

    int getSpellPower() const;
};

#endif