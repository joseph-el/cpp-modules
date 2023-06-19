# include "Animal.hpp"

Animal::Animal() {
    type = "Empty!";
    puts("Animal default constructor called !");
}

Animal::Animal(const std::string &Type) : type(Type) {
    puts("Animal constructor using parameters called !");   
}

Animal::Animal(const Animal &Another) {
    puts("Animal copy constructor called !");
    *this = Another;
}

Animal& Animal::operator=(const Animal &Another) {
    puts("Animal copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void Animal::makeSound(void) const {
    puts("Animal sound !");
}

std::string Animal::getType(void) const {
    return (this->type);
}

Animal::~Animal() {
	puts("Animal destructor called !");
}