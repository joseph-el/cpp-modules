# pragma once

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
    public :
        Cure();
        Cure(const Cure &);
        void operator=(const Cure &);
        AMateria* clone(void) const;
        void use(ICharacter &);
        ~Cure();
};