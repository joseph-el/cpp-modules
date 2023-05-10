# pragma once

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter{
    private :
        std::string name;
        AMateria *Var[4];
    public :
        Character();
        Character(const Character &);
        void operator=(const Character &);
        ~Character();
};
