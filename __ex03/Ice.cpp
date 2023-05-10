# include "Ice.hpp"

Ice::Ice() {
    this->type = "ice";
    std::cout << "Default of Ice\n";
}

Ice::Ice(const Ice &Another) {
    std::cout << "Copy constructor of Ice\n";
    *this = Another;
}

void Ice::operator=(const Ice & Another){
    this->type = Another.GetNAME();
    std::cout << "Copy assignment operator of Ice\n";
}

Ice::~Ice() {
    std::cout << "Destructor of Ice\n";
}

