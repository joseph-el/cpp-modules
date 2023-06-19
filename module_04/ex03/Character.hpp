# pragma once

# include "ICharacter.hpp"

class Character : public ICharacter {
    private :
        std::string name;
        AMateria *Var[4];
        AMateria *SaveAddress;

    public :
        Character();
        Character(const Character &);
        Character(const std::string &);

        void operator=(const Character &);
        void unequip(int);
        void equip(AMateria *);
        void use(int , ICharacter &);
        std::string const & getName(void) const;

        void removeAddress(void);
        ~Character();
};
