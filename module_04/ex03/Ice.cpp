# include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    // std::cout << "Default of Ice\n";
}

Ice::Ice(const Ice &Another) : AMateria("ice"){
    // std::cout << "Copy constructor of Ice\n";
    *this = Another;
}

void Ice::operator=(const Ice & Another){
    this->type = Another.getType();
    // std::cout << "Copy assignment operator of Ice\n";
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " + target.getName() + " *\n";
}

AMateria* Ice::clone(void) const{
    return new Ice();
}

Ice::~Ice() {
    // std::cout << "Destructor of Ice\n";
}