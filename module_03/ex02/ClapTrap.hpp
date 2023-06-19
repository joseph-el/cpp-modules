
# pragma once

# include <iostream>

# define Icannot(Name, ToDsp) std::cout << Name << "can't " << ToDsp << std::endl; return ;

class ClapTrap {

    protected :
        std::string  name;
        int Health;
        int Energy;
        int Attack;

    public :
        ClapTrap();
        ClapTrap(const ClapTrap &);
        ClapTrap(const std::string &);
        ClapTrap& operator = (const ClapTrap &);
          void attack(const std::string &);
        void takeDamage(unsigned int);
        void beRepaired(unsigned int);
          ~ClapTrap();
};