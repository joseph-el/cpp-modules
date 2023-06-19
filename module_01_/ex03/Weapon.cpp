# include "Weapon.hpp"

Weapon::Weapon(std::string Type) : type(Type) {}

const std::string &Weapon::getType( void ) const {
    return (this->type);
}

void Weapon::setType(std::string new_input) {
    type = new_input;
}