# pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    
    private :
        std::string name;
    public :
        DiamondTrap();
        DiamondTrap(const DiamondTrap &);
        DiamondTrap(const std::string &);
        DiamondTrap& operator=(const DiamondTrap &);
        void attack(const std::string &);

        void whoAmI();
        ~DiamondTrap();
};