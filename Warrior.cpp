#include "Warrior.h"

Warrior::Warrior(string name, int health, int power, int armor)
    : Hero(name, health, power)
{
    armorRating = armor;
}

int Warrior::calculateEffectiveHealth() const
{
    return getHealth() + (armorRating * 2);
}