
# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    puts("ScavTrap default constructor called !");
    Health = 100;
    Energy = 50;
    Attack = 20;
}

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name) {
    puts("ScavTrap constructor using parameters called !");
    Health = 100;
    Energy = 50;
    Attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &Another) {
    puts("ScavTrap copy constructor called !");
    memcpy(this, &Another, sizeof(ScavTrap));
}

ScavTrap& ScavTrap::operator=(const ScavTrap &Another) {
    puts("ScavTrap copy assignment operator called !");
    memcpy(this, &Another, sizeof(ScavTrap));
    return (*this);
}

void ScavTrap::attack(const std::string &Target) {
    if (Energy < 1 or Health < 1)
        {Icannot(name, "attack!")}
    Energy --;
    std::cout << "ScavTrap " + name << " attack " << Attack << " " + Target + "!\n";
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode\n";
}

ScavTrap::~ScavTrap() {
	puts("ScavTrap destructor called !");
}