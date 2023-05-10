# include "AMateria.hpp"

AMateria::AMateria() : name("Default") {
    std::cout << "Default constructor of AMateria\n";
}

AMateria::AMateria(const AMateria &Another) {
    std::cout << "copy constructor of AMateria\n";
    *this = Another;
}

void AMateria::operator=(const AMateria &Another) {
    std::cout << "Copy assignment operator of AMateria\n";
    this->type = Another.getType();
}

AMateria::AMateria(std::string const & _type) : type(_type) {
    std::cout << "constructor by setting of AMateria\n";
}

std::string const & getType() const {
    return (type);
}

AMateria::~AMateria() {
    std::cout << "Destructor of AMateria\n";
}