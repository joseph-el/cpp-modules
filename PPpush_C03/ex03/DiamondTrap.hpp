# pragma once 

# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap {
    private :
        std::string name;
        
    public :
        DiamondTrap();
        DiamondTrap(const std::string &);
        DiamondTrap(const DiamondTrap &);
        void operator=(const DiamondTrap &);
        void whoAmI(void);
        ~DiamondTrap();
        std::string Getting(void) const;
};