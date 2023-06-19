# pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
    public :
        ScavTrap();
        ScavTrap(const ScavTrap &);
        ScavTrap(const std::string &);
        ScavTrap& operator=(const ScavTrap &);
        void attack(const std::string &);
        void guardGate(void);
        ~ScavTrap();
};