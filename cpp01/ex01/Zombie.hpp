#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
class Zombie
{
private:
    std::string name;
public:
    void announce(void)
    {
        std::cout << this->name << ": more brainnnnnz..." << std::endl;
    }
    void setName(std::string name);
    Zombie();
    ~Zombie();
};


Zombie* zombieHorde( int N, std::string name );

#endif