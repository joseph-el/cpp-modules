# include "Dog.hpp"

Dog::Dog() {
    puts("Dog default constructor called !");
}

Dog::Dog(const Dog &Another) {
    puts("Dog copy constructor called !");
    type = Another.getType();
}

Dog& Dog::operator=(const Dog &Another) {
    puts("Dog copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void Dog::makeSound(void) const {
    puts("Dog sound !");
}

Dog::~Dog() {
	puts("Dog destructor called !");
}