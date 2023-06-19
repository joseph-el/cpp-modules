# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void)
{
    ScavTrap *Next = new ScavTrap("Dexter");

    Next->attack("Alex");
    Next->attack("Johen");
    Next->attack("Johen");
    Next->attack("Johen");
    Next->attack("Johen");
    Next->guardGate();
    Next->attack("Johen");
    Next->beRepaired(1);
    Next->takeDamage(10);
    Next->guardGate();
    delete Next;
    return (EXIT_SUCCESS);
}