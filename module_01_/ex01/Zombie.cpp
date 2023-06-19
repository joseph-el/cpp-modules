# include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie(){
    std::cout << "Destroy [✅]" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}