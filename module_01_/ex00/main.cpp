# include "Zombie.hpp"

int main(void)
{
    Zombie *Zz;
    
    Zz = newZombie("kk");
    
    randomChump("Hello Joseph");
    delete Zz;
    return (EXIT_SUCCESS);
}