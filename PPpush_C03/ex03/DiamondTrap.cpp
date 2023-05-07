# include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() {}

DiamondTrap::~DiamondTrap() {}

DiamondTrap::DiamondTrap(const std::string& Name) : ClapTrap(Name + "_clap_name") {
    name = Name;
}

std::string DiamondTrap::Getting(void) const {
    return name;
}

void DiamondTrap::operator=(const DiamondTrap &Another) {
    this->name = Another.Getting();
}

DiamondTrap::DiamondTrap(const DiamondTrap &Another) {
    *this = Another;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "Iam " + name << " also know " + ClapTrap::name << "✌🏻\n";
}

