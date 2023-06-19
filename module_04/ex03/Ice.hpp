# pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
    public :
        Ice();
        Ice(const Ice &);
        void operator=(const Ice &);
        AMateria* clone(void) const;
        void use(ICharacter &);
        ~Ice();
};