#include "Zombie.hpp"
#include <stdlib.h>

int main(){

    int numZombie;
    std::string zombieName;
    Zombie *zombies;
    std::cout << "Insert number of zombie :";
    std::cin >> numZombie;
    std::cout << "Insert zombie name :";
    std::cin >> zombieName;

    zombies = zombieHorde(numZombie, zombieName);
    
    for (int i = 0; i < numZombie; ++i)
    {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}