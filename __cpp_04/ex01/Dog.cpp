
# include "Dog.hpp"

Dog::Dog() {
    puts("Dog default constructor called !");
    brain = new Brain();
}

Dog::Dog(const Dog &Another) {
    puts("Dog copy constructor called !");
    type = Another.getType();
    brain = new Brain();
}

Dog& Dog::operator=(const Dog &Another) {
    puts("Dog copy assignment operator called !");
    type = Another.getType();
    this->brain = Another.brain;
    return (*this);
}

void Dog::makeSound(void) const {
    puts("Dog sound !");
}

Dog::~Dog() {
	puts("Dog destructor called !");
    delete brain;
}