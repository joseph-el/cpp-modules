
# pragma once

# include "Animal.hpp"

class Cat : public Animal {
    
    public :
        Cat();
        Cat(const Cat &);
        Cat& operator =(const Cat &);
        void makeSound(void) const;
        ~Cat();
};