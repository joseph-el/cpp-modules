
# include "Brain.hpp"

Brain::Brain() {
    puts("Brain default constructor called !");
}

Brain::Brain(const Brain &Another) {
    puts("Brain copy constructor called !");
    memcpy(this, &Another, sizeof(Brain));
}

Brain& Brain::operator=(const Brain &Another) {
    puts("Brain copy assignment operator called !");
    memcpy(this, &Another, sizeof(Brain));
    return (*this);
}

Brain::~Brain() {
	puts("Brain destructor called !");
}