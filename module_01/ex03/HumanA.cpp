# include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &_weapon) : name(Name), weapon(_weapon) {}

void HumanA::attack(void) const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}