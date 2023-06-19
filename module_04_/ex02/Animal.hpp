
# pragma once

# include <iostream>

class Animal {
    protected :
        std::string type;

    public :
        Animal();
        Animal(const Animal &);
        Animal(const std::string &);
        Animal& operator =(const Animal &);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
        
        virtual ~Animal();
};