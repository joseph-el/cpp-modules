
# include "Cat.hpp"

Cat::Cat() {
    puts("Cat default constructor called !");
    brain = new Brain();
}

Cat::Cat(const Cat &Another) {
    puts("Cat copy constructor called !");
    *this = Another;

}

Cat& Cat::operator=(const Cat &Another) {
    puts("Cat copy assignment operator called !");
    type = Another.getType();
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain[i] = Another.brain[i];
    return (*this);
}

void Cat::makeSound(void) const {
    puts("Cat sound !");
}

Cat::~Cat() {
	puts("Cat destructor called !");
    delete brain;
}