# include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ret;
    ClapTrap *set = new ClapTrap("BOB");
    
    ret = *set;
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->beRepaired(1);
    set->takeDamage(10);
    set->attack("DDD");
    delete set;
    return (EXIT_SUCCESS);
}