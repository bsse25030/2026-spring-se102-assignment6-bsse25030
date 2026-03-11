#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(string name, int health, int power, int spell)
    : Hero(name, health, power)
{
    spellPower = spell;
}

int MagicalEntity::getSpellPower() const
{
    return spellPower;
}