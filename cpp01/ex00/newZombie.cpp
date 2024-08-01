#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *Zom = new Zombie(name);
    return Zom;
}