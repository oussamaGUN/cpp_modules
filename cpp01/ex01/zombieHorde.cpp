#include "Zombie.hpp"


void Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::Zombie()
{
}
Zombie::~Zombie()
{
    std::cout << this->name << ": has been deleted" << std::endl;
}
Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
    }
    return zombies;
}