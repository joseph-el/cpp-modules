
# pragma once

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

    public :
        FragTrap();
        FragTrap(const FragTrap &);
        FragTrap(const std::string &);
        FragTrap& operator =(const FragTrap &);
        void highFivesGuys(void);
        void attack(const std::string &);
        std::string Getting(void) const;
        ~FragTrap();
};