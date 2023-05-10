
# pragma once

# include <iostream>

# define RED    "\033[0;31m"
# define BLACK  "\033[0;30m"
# define GREEN  "\033[0;32m"
# define WHITE  "\033[0;37m"
# define YELLOW "\033[1;33m"
# define MAX_SIZE 8

class Animal {
    protected :
        std::string type;

    public :
        Animal();
        Animal(const Animal &);
        Animal(const std::string &);
        Animal& operator =(const Animal &);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        
        virtual ~Animal();
};