
# pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    
    public :
        ScavTrap();
        ScavTrap(const ScavTrap &);
        ScavTrap(const std::string &);
        ScavTrap& operator=(const ScavTrap &);
        void attack(const std::string &);
        std::string Getting(void) const;
        void guardGate(void);
        ~ScavTrap();
};