# include "Cure.hpp"

Cure::Cure(){
    this->type = "cure";
    std::cout << "Default of Cure\n";
}

Cure::Cure(const Cure &Another) {
    std::cout << "Copy constructor of Cure\n";
    *this = Another;
}

void Cure::operator=(const Cure & Another){
    this->type = Another.GetNAME();
    std::cout << "Copy assignment operator of Cure\n";
}

Cure::~Cure() {
    std::cout << "Destructor of Cure\n";
}

