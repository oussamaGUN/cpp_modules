#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name)
    {
        this->name = name;
    }
    ~Zombie()
    {
        std::cout << this->name << " has been deleted" << std::endl;
    }
    void announce(void)
    {
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
    std::string getName(void)
    {
        return this->name;
    }
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif