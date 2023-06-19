# include "AMateria.hpp"

std::string const & AMateria::getType() const {
    return (type);
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & Type) : type(Type) {}

void AMateria::use(ICharacter& target){
    std::cout << "AMateria::use => " + target.getName() << std::endl;
}
