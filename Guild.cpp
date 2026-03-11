#include "Guild.h"

Guild::Guild(string name){
    guildName = name;
    memberCount = 0;
}

void Guild::operator+=(Hero* newHero)
{
    if (memberCount < 15)
    {
        roster[memberCount] = newHero;
        memberCount++;
    }
    else
    {
        cout << "Guild is at full capacity!" << endl;
    }
}

int Guild::calculateTotalGuildPower() const
{
    int total = 0;

    for (int i = 0; i < memberCount; i++)
    {
        total += roster[i]->getPower();
    }

    return total;
}

ostream& operator<<(ostream& os, const Guild& g)
{
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;

    for (int i = 0; i < g.memberCount; i++)
    {
        os << "- " << g.roster[i]->getName()
           << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }

    return os;
}

void Guild::displayGuildStats() const
{
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

  Guild::~Guild()
{
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}