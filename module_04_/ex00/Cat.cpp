
# include "Cat.hpp"

Cat::Cat() {
    puts("Cat default constructor called !");
}

Cat::Cat(const Cat &Another) {
    puts("Cat copy constructor called !");
    type = Another.getType();

}

Cat& Cat::operator=(const Cat &Another) {
    puts("Cat copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void Cat::makeSound(void) const {
    puts("Cat sound !");
}

Cat::~Cat() {
	puts("Cat destructor called !");
}