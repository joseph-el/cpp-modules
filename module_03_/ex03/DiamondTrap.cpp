# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	name = "DiamondTrap";
    this->Health = FragTrap::Health;
    this->Energy =  ScavTrap::Energy;
    this->Attack = FragTrap::Attack;
    puts("DiamondTrap default constructor called !");
}

DiamondTrap::DiamondTrap(const std::string &Name) : ClapTrap(Name + "_clap_name"), FragTrap(), ScavTrap() {
    puts("DiamondTrap constructor using parameters called !");
    name = Name;
    this->Health = FragTrap::Health;
    this->Energy =  ScavTrap::Energy;
    this->Attack = FragTrap::Attack;
}

void DiamondTrap::attack(const std::string &TT){
    this->ScavTrap::attack(TT);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &Another) {
    puts("DiamondTrap constructor operator called !");
    name = Another.FragTrap::Getting();
    return (*this);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "Iam " + name << " also know " + ClapTrap::name << "✌🏻\n";
}

DiamondTrap::~DiamondTrap() {
	puts("DiamondTrap Destroy called");
}