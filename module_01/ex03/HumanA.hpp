
# pragma once

# include "Weapon.hpp"

class HumanA {

    private :
        std::string name;
        Weapon &weapon;

    public :
        HumanA(std::string , Weapon &);
        void attack() const;
};