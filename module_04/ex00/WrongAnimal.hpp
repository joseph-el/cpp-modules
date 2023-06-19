# pragma once

# include <iostream>

class WrongAnimal {
    protected :
        std::string type;

    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &);
        WrongAnimal(const std::string &);
        WrongAnimal& operator =(const WrongAnimal &);
        const std::string& getType(void) const;
        void makeSound(void) const;
        ~WrongAnimal();
};