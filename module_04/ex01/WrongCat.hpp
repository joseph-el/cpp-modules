
# pragma once

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public :
        WrongCat();
        WrongCat(const WrongCat &);
        WrongCat& operator =(const WrongCat &);
        void makeSound(void) const;
        ~WrongCat();
};