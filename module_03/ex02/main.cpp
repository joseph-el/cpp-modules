
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void)
{
    ClapTrap ret;
    ClapTrap *set = new ClapTrap("BOB");
    FragTrap *Next = new FragTrap("DExter");

    Next->attack("Alex");
    Next->highFivesGuys();
    Next->takeDamage(10);
    Next->attack("BMW");
    return 0;
    
    {
        ret = *set;
        set->attack("Johen");
        set->attack("Johen");
        set->attack("Johen");
        set->attack("Johen");
        set->attack("Johen");
        set->beRepaired(1);
        set->takeDamage(10);
    }
    delete set;
    return (EXIT_SUCCESS);
}