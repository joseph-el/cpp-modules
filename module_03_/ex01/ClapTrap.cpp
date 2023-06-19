# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), Health(10), Energy(10), Attack(0) {
    puts("ClapTrap default constructor called !");
}

ClapTrap::ClapTrap(const std::string &Name) : name(Name), Health(10), Energy(10), Attack(0) {
    puts("ClapTrap constructor using parameters called !");
}

ClapTrap::ClapTrap(const ClapTrap &Another) {
    puts("ClapTrap copy constructor called !");
    memcpy(this, &Another, sizeof(ClapTrap));
}

ClapTrap& ClapTrap::operator=(const ClapTrap &Another) {
    puts("ClapTrap copy assignment operator called !");
    memcpy(this, &Another, sizeof(ClapTrap));
    return (*this);
}

ClapTrap::~ClapTrap() {
    puts("ClapTrap destructor called !");
}

void ClapTrap::attack(const std::string &Target) {
    if (Energy < 1 or Health < 1)
        {Icannot(name, "attack!")}
    Energy --;
    std::cout << name << " attack " << Attack << " " + Target + "!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (Energy < 1 or Health < 1)
        {Icannot(name, "repaire")}
    Energy --;
    Health += amount;
    std::cout << name << " Repaired " << amount << "!\n";
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (Energy < 1 or Health < 1)
        {Icannot(name, "take damege because is die!")}
    Health -= amount;
    if (Health < 1)
        std::cout << name << " is Die!\n";
    else
        std::cout << name << " take " << amount << " amount of damage!\n";
}
