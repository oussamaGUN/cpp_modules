#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zom = new Zombie(name);
    if (!zom)
        return NULL;
    return zom;
}