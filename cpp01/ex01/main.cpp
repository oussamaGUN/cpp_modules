#include "Zombie.hpp"


int main(int argc, char const *argv[])
{
    int N = 10;
    Zombie  *zom = zombieHorde(N , "oussama");

    for (int i = 0;i < N; i++)
        std::cout << zom[i].getVal() << std::endl;
    delete [] zom;
    return 0;
}
