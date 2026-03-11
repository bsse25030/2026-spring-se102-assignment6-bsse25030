#include "Spellblade.h"

Spellblade::Spellblade(string name, int health, int power, int armor, int spell)
    : Warrior(name, health, power, armor),
      MagicalEntity(name, health, power, spell)
{
}

int Spellblade::calculateHybridDamage() const
{
    return Warrior::getPower() + getSpellPower();
}