# include "HumanB.hpp"

HumanB::HumanB(std::string Name) : weapon(nullptr), name(Name) {}

void HumanB::attack(void) const {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " is unarmed and cannot attack " << std::endl;
}

void HumanB::setWeapon(Weapon &object) {
    weapon = &object;
}