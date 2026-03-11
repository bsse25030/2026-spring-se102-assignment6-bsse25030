#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    Guild g("Valor");

    Hero* h1 = new Hero("Aragorn",100,50);
    Hero* h2 = new Warrior("Gimli",120,40,10);
    Hero* h3 = new Knight("Arthur",150,60,20,25);

    g += h1;
    g += h2;
    g += h3;

    cout << g;

    g.displayGuildStats();

    return 0;
}