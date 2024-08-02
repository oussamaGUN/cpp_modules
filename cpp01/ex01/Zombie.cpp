#include "Zombie.hpp"

void Zombie::setVal(std::string name)
{
    this->name = name;
}

std::string Zombie::getVal()
{
    return this->name;
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "deallocate memory" << std::endl;
}