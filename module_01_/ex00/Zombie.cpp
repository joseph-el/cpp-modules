
# include "Zombie.hpp"

Zombie::Zombie() {
    name = "";
}

Zombie::Zombie(std::string zombie_name) : name(zombie_name) {}

Zombie::~Zombie() {
    std::cout << this->name << " :    Destory [✅]" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}