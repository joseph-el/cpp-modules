# pragma once

# include "Weapon.hpp"

class HumanB {
    private :
        Weapon  *weapon;
        std::string name;
    public :
        HumanB(std::string);
        void setWeapon(Weapon &);
        void attack(void) const;
};