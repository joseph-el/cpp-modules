
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap *RET = new DiamondTrap("HELLO");


    RET->attack("KIKIKI");
    RET->takeDamage(14);
    RET->whoAmI();
    RET->attack("HJE");

    delete RET;
    return (EXIT_SUCCESS);
}