#ifndef __ZOMBIE_CPP_
#define __ZOMBIE_CPP_


#include "iostream"

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name);
    void announce(void);
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif