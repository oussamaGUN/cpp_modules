#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
    int N = 10;
    Zombie *zombies = zombieHorde(N, "SUS");
    for (int i = 0; i < N; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
    return 0;
}
