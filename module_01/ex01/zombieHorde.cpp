# include "Zombie.hpp"

void Zombie::set(std::string Name) {
    name = Name;
}

Zombie* zombieHorde( int N, std::string name ){
    if (N < 1)
        exit(EXIT_FAILURE);
    Zombie *zombies = new Zombie[N];
    while (N--)
        zombies[N].set(name);
    return (zombies);
}