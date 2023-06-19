
# include "Zombie.hpp"

void randomChump( std::string name ) {
    Zombie *Zombie;
    Zombie = newZombie(name);
    Zombie->announce();
}