# include "WrongCat.hpp"

WrongCat::WrongCat() {
    puts("WrongCat default constructor called !");
}

WrongCat::WrongCat(const WrongCat &Another) {
    puts("WrongCat copy constructor called !");
    type = Another.getType();

}

WrongCat& WrongCat::operator=(const WrongCat &Another) {
    puts("WrongCat copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void WrongCat::makeSound(void) const {
    puts("WrongCat sound !");
}

WrongCat::~WrongCat() {
	puts("WrongCat destructor called !");
}