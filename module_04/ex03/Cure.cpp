# include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    // std::cout << "Default of Cure\n";
}

Cure::Cure(const Cure &Another): AMateria(Another) {
    // std::cout << "Copy constructor of Cure\n";
    *this = Another;
}

void Cure::operator=(const Cure & Another){
    this->type = Another.getType();
    // std::cout << "Copy assignment operator of Cure\n";
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " + target.getName() + " wounds *\n";
}

AMateria* Cure::clone(void) const {
    return new Cure();
}

Cure::~Cure() {
    // std::cout << "Destructor of Cure\n";
}