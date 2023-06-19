# pragma once

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    
    private :
        AMateria *VAR[4];

    public :
        MateriaSource();
        MateriaSource(const MateriaSource &);
        void operator=(const MateriaSource &);


        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const &);

    ~MateriaSource();
};